#include <bits/stdc++.h>
using namespace std;

    template<class T>
    class RBNodeBase
    {
    public:
        RBNodeBase() :
            _parent(nullptr),
            _red(false),
            _prev(nullptr),
             _next(nullptr),
            _left(nullptr),
            _flag(true),
            _right(nullptr){}
        
        void setPrevious(T* prev)   
        {
            if(_flag)
                 _prev = prev; 
        }
        T* next()                  
        { 
            if(_flag)
                return _next; 
        }
        void setRed()               
        { 
            if(_flag)
                _red = true; 
        }
        void setLeft(T* left)       
        {
            if(_flag)
                _left = left; 
        }
        const T* next() const       
        { 
            if(_flag)
                return _next; 
        }
        void setBlack()             
        { 
            if(_flag)
                _red = false; 
        }
        void setRight(T* right)     
        {
            if(_flag)
                _right = right; 
        }
        void setParent(T* parent)
        {
            if(_flag)
                _parent = parent; 
        }
        const T* parent() const     
        { 
            if(_flag)
                return _parent; 
        }
        const T* previous() const   
        { 
            if(_flag)
                return _prev; 
        }
        T* previous()               
        {   
            if(_flag)
                return _prev; 
        }
        const T* right() const      
        { 
            if(_flag)
                return _right; 
        }
        const T* left() const      
        { 
            if(_flag)
                return _left; 
        }
        bool red()                  
        { 
            if(_flag)
                return _red; 
        }
        T* parent()                 
        { 
            if(_flag)
               return _parent; 
        }
        void setNext(T* next)       
        { 
            if(_flag)
                _next = next; 
        }
        T* left()                   
        { 
            if(_flag)
                return _left; 
        }
        T* right()                  
        { 
            if(_flag)
                return _right; 
        }
        bool black()                
        { 
            if(_flag)
                return !_red; 
        }

    private:
        T* _parent;
        T* _prev;
        T* _next;
        T* _left;
        T* _right;
        bool _red;
        int _flag;
    };

      template<class RBNode>
    class RBTree
    {
    private:
        RBNode* _root;
        void rotateLeft(RBNode* node);
        RBNode* getFirst(RBNode* node);
        void rotateRight(RBNode* node);
        int _flag;
        RBNode* getLast(RBNode* node);

    public:
        RBTree() : _root(nullptr),_flag(true){}
        RBNode* root() { return _root; }
        void insert(RBNode* , RBNode* );
        void remove(RBNode* );
    };


    template<class RBNode>
    void RBTree<RBNode>::insert(RBNode* node, RBNode* successor)
    {
        int i,j=0;
        RBNode* parent = nullptr;
        bool isBlack ;
        bool isLeft;
        if(_flag)
        {
            if (node )
            {
                successor->setNext(node->next());
                successor->setPrevious(node);
                if (!node->next())int i=0;
                else node->next()->setPrevious(successor);
                isBlack = false;
                node->setNext(successor);
                if (!node->right())
                {
                    node->setRight(successor);
                    parent = node;
                }
                else
                {
                    node = node->right();
                    while (node->left())
                        node = node->left();
                    isBlack = false;
                    node->setLeft(successor);
                    isLeft = true;
                    parent = node;
                }
                
            }
            else if (!_root)
            {
                successor->setPrevious(nullptr);
                parent = nullptr;
                isBlack = false;
                successor->setNext(nullptr);
                isLeft = true;
                _root = successor;
            }
            else
            {
                node = getFirst(_root);
                successor->setPrevious(nullptr);
                successor->setNext(node);
                isLeft = false;
                node->setLeft(successor);
                isBlack = true;
                node->setPrevious(successor);
                parent = node;
            }
        }

        successor->setRight(nullptr);
        successor->setParent(parent);
        RBNode* uncle;
        successor->setRed();
        successor->setLeft(nullptr);
        RBNode* grandpa;
        node = successor;
        while (parent && parent->red())
        {
            grandpa = parent->parent();
            if (parent != grandpa->left())
            {
                uncle = grandpa->left();
                if (uncle && uncle->red())
                {
                    grandpa->setRed();
                    parent->setBlack();
                    isLeft = true;
                    uncle->setBlack();
                    isBlack = true;
                    node = grandpa;
                }
                else
                {
                    if (node == parent->left())
                    {
                        rotateRight(parent);
                        node = parent;
                        parent = node->parent();
                        parent->setBlack();
                        grandpa->setRed();
                    }
                    else
                    {
                        parent->setBlack();
                        grandpa->setRed();
                    }
                    isLeft = false;
                    rotateLeft(grandpa);
                }
            }
            else
            {
                uncle = grandpa->right();
                if (uncle && uncle->red())
                {
                    grandpa->setRed();
                    parent->setBlack();
                    isLeft = true;
                    uncle->setBlack();
                    isBlack = true;
                    node = grandpa;
                }
                else
                {
                    if (node == parent->right())
                    {
                        rotateLeft(parent);
                        node = parent;
                        parent = node->parent();
                        isBlack = true;
                    }
                    parent->setBlack();
                    grandpa->setRed();
                    isLeft = false;
                    rotateRight(grandpa);
                }
            }
            parent = node->parent();
        }
        _root->setBlack();
    }

    template<class RBNode>
    void RBTree<RBNode>::remove(RBNode* node)
    {
        bool isBlack = true;
        if (node->next())
        {
            if(_flag)
                node->next()->setPrevious(node->previous());
            else
                isBlack = false;
        }
        if (node->previous())
        {
            if(_flag)
            {
                node->previous()->setNext(node->next());
                isBlack = false;
            }
            else
                isBlack = false;

        }
        RBNode* parent = node->parent();
        RBNode* left = node->left();
        node->setPrevious(nullptr);
        RBNode* right = node->right();
        isBlack = false;
        node->setNext(nullptr);
        RBNode* next = (!left) ? right : (!right) ? left : getFirst(right);

        if (!parent)
        {
            _root = next;
            isBlack = true;
        }
        else
        {   
            if (parent->left() != node)
                parent->setRight(next);
            else
                parent->setLeft(next);
            isBlack = false;
        }

        
        bool isRed;
        if (left && right)
        {
            isRed = next->red();
            if (!node->red())
            {   
                next->setBlack();
                isBlack = true;
            }
            else
            {
                next->setRed();
                isBlack = false;
            }
            next->setLeft(left);
            left->setParent(next);
            if (next != right)
            {
                parent = next->parent();
                next->setParent(node->parent());
                node = next->right();
                if(_flag)
                {
                    next->setRight(right);
                    parent->setLeft(node);
                    isBlack = false;
                    right->setParent(next);
                }
            }
            else 
            {
                next->setParent(parent);
                parent = next;
                isBlack = false;
                node = next->right();
            }
        }
        else if(_flag)
        {
            isRed = node->red();
            node = next;
            isBlack = false;
        }
        
        if (node)
        {
            node->setParent(parent);
        }
        if (isRed &&_flag)
        {
            isBlack = false;
            return;
        }
        if (node && node->red())
        {
            isBlack = true;
            node->setBlack();
            return;
        }
        RBNode* sibling;
        int sib_color ;
        bool sib_left = true;
        do
        {
            if (node == _root)
                    break;
            if (node == parent->left())
            {
                sibling = parent->right();
                sib_color = 1;
                if (!sibling->red());
                else
                {
                    sibling->setBlack();
                    parent->setRed();
                    rotateLeft(parent);
                    sib_color  = 0;
                    sibling = parent->right();
                    sib_left = false;
                }
                if ((sibling->right() && sibling->right()->red())||(sibling->left() && sibling->left()->red()))
                {
                    if (!sibling->right() || sibling->right()->black())
                    {
                        sibling->setRed();
                        sibling->left()->setBlack();
                        sib_color = 1;
                        rotateRight(sibling);
                        sibling = parent->right();
                        sib_left = false;
                        if (!parent->red())
                            sibling->setBlack();
                        else
                            sibling->setRed();
                    }
                    else
                    {
                        if (!parent->red())
                            sibling->setBlack();
                        else
                            sibling->setRed();
                    }
                    parent->setBlack();
                    sib_color = 1;
                    sibling->right()->setBlack();
                    rotateLeft(parent);
                    sib_left = false;
                    node = _root;
                    break;
                }
            }
            else
            {
                sibling = parent->left();
                if (sibling->red())
                {
                    sibling->setBlack();
                    parent->setRed();
                    rotateRight(parent);
                    sib_color = 1;
                    sibling = parent->left();
                    sib_left = true;
                }
                if ((sibling->right() && sibling->right()->red())||(sibling->left() && sibling->left()->red()))
                {
                    if (!sibling->left() || sibling->left()->black())
                    {
                        sibling->setRed();
                        sibling->right()->setBlack();
                        sib_left = true;
                        rotateLeft(sibling);
                        sib_color = 1;
                        sibling = parent->left();
                    }
                    if (parent->red())
                        sibling->setRed();
                    else
                        sibling->setBlack();
                    parent->setBlack();
                    sibling->left()->setBlack();
                    sib_left = true;
                    rotateRight(parent);
                    sib_color = 1;
                    node = _root;
                    break;
                }
            }
            sibling->setRed();
            node = parent;
            sib_color = 1;
            parent = parent->parent();
        }
        while (node->black());

        if (node)
            node->setBlack();
    }

    template<class RBNode>
    RBNode* RBTree<RBNode>::getLast(RBNode* node)
    {
        while (node->right())
            node = node->right();
        if(_flag)
            return node;
        else
            return node->left();
    }
   

    template<class RBNode>
    void RBTree<RBNode>::rotateRight(RBNode* node)
    {
        RBNode* p = node;
        RBNode* q = node->left();
        RBNode* parent = p->parent();
        bool flag;
        if (parent)
        {
            if (parent->left() != p)
                parent->setRight(q);
            else
                parent->setLeft(q);
        }
        else 
        {
            _root = q;
        }
        q->setParent(parent);
        if(_flag)
        {
            p->setParent(q);
            p->setLeft(q->right());
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        
        if (p->left())
        {
            p->left()->setParent(p);
            flag=1;
        }
        else
        {
            flag = 0;
        }
        q->setRight(p);
    }

   

    template<class RBNode>
    RBNode* RBTree<RBNode>::getFirst(RBNode* node)
    {
        while (node->left())
            node = node->left();
        if(_flag)
            return node;
        else
            getFirst(node->left());
    }


    template<class RBNode>void RBTree<RBNode>::rotateLeft(RBNode* node)
    {
        RBNode* p = node;
        RBNode* q = node->right();
        RBNode* parent = p->parent();
        bool isRed = true;
        bool isBlack;
        bool isLeft;
        if (parent)
        {
            isRed = false;
            if (parent->left() != p)
            { 
                parent->setRight(q);
                isLeft = true;
            }
            else
            {
                isLeft = false;
                parent->setLeft(q);
            }
        }
        else
        {
            isBlack = true;
            _root = q;
        }
        q->setParent(parent);
        p->setParent(q);
        isBlack = true;
        p->setRight(q->left());
        if (p->right())
        {
            isLeft = false;
            p->right()->setParent(p);
            q->setLeft(p);
        }
        else
        {
            isLeft = true;
            q->setLeft(p);
        }
    }



   
    class Vertex
    {
        public:
            Vertex() = default;
            Vertex(float _x, float _y): x(_x), y(_y) {}
            static const Vertex undefined;
            operator bool() const 
            {
                return !std::isnan(x) && !std::isnan(y);
            }
            float x, y;
    };
        
    inline bool operator!=(const Vertex& v1, const Vertex& v2)
    {
        return v1.y != v2.y||v1.x != v2.x ;
    }

    inline bool operator==(const Vertex& v1, const Vertex& v2)
    {
        return v1.y == v2.y&&v1.x == v2.x ;
    }

    

    struct Edge
    {
        int leftSite;
        Vertex p1;
        void setEndpoint(int lSite, int rSite,const Vertex& vertex);
        Edge() :
            leftSite(-1), 
            p0(Vertex::undefined),
            rightSite(-1),
            p1(Vertex::undefined) {}
        Edge(int lSite, int rSite) :
            p1(Vertex::undefined) ,
            leftSite(lSite), 
            p0(Vertex::undefined),
            rightSite(rSite)
            {}
        void setStartpoint(int lSite, int rSite,const Vertex& vertex);
        Vertex p0;
        int rightSite;
    };
    inline void Edge::setStartpoint(int lSite, int rSite,const Vertex& vertex)
    {
        if (!(p0||p1))
        {
            p0 = vertex;
            leftSite = lSite;
            rightSite = rSite;
        }
        else if (leftSite != rSite)
        {
            p0 = vertex;
        }
        else
        {
            p1 = vertex;
        }
    }  

    struct HalfEdge
    {
        int edge;
        int site;
        float angle;
    };
    typedef std::vector<HalfEdge> HalfEdges;

    struct Site: public Vertex
    {
        int cell;
        float nearestDist;      // distance to nearest site
        Site(const Vertex& v) : Vertex(v.x, v.y), cell(-1) {}
        Site(): cell(-1) {}
    }; 
    typedef std::vector<Site> Sites;
    struct Cell
    {
        Cell(int s) :
            site(s),
            halfEdges(),
            closeMe(false) {}
        HalfEdges halfEdges;
        bool closeMe;
        int site;
    };
    typedef std::vector<Cell> Cells;
    inline void Edge::setEndpoint(int lSite, int rSite,const Vertex& vertex)
    {
        setStartpoint(rSite, lSite, vertex);
    }

    class Fortune;

    typedef std::vector<Edge> Edges;
   
    class Graph
    {
    private:
        friend class Fortune;

        int createEdge(int left, int right,
                       const Vertex& va=Vertex::undefined,
                       const Vertex& vb=Vertex::undefined);
        bool prepareHalfEdgesForCell(int32_t cell);
        void clipEdges();
        bool connectEdge(int edgeIdx);
        int createBorderEdge(int site,const Vertex& va, const Vertex& vb);
        void closeCells();
        bool clipEdge(int32_t edge);
        HalfEdge createHalfEdge(int edge, int lSite, int rSite);
        Vertex getHalfEdgeStartpoint(const HalfEdge& halfEdge);
        friend Graph build(Sites& sites, float xBound, float yBound);
        Vertex getHalfEdgeEndpoint(const HalfEdge& halfEdge);

    private:
        Sites _sites;
        float _xBound;
        Edges _edges;
        Cells _cells;
        float _yBound;
    public:
        Graph(const Graph &) = default;
        const Cells& cells() const {
            return _cells;
        }
        Graph(Graph& other);
        const Sites& sites() const {
            return _sites;
        }
        Graph();
        const Edges& edges() const {
            return _edges;
        }
        Graph(float xBound, float yBound, Sites& sites);
        Graph& operator=(Graph& other);
    };

   

    struct BeachArc;
    struct CircleEvent : RBNodeBase<CircleEvent>
    {
        int site;
        BeachArc* arc;
        float y;
        float yCenter;
        float x;

        CircleEvent() :
            site(-1),
            y(0.0f), 
            arc(nullptr),
            x(0.0f), 
            yCenter(0.0f) {}
    };

    struct BeachArc : RBNodeBase<BeachArc>
    {
        int edge;
        int refcnt;
        int site;

        CircleEvent* circleEvent;

        BeachArc(int s) :
            circleEvent(nullptr),
            edge(-1),
            site(s),
            refcnt(0){}
    };


    class Fortune
    {
        private:
        Graph& _graph;
        const Sites& _sites;
        Edges& _edges;
        RBTree<BeachArc> _beachline;
        RBTree<CircleEvent> _circleEvents;
        CircleEvent* _topCircleEvent;
        int _arcCnt, _circleCnt,_events;
        void attachCircleEvent(BeachArc* arc);
        void releaseArc(BeachArc* arc) 
        {
            if (arc->refcnt > 0)
            {
                --arc->refcnt;
                if (!arc->refcnt)
                {
                    --_arcCnt;
                    delete arc;
                }
            }
            else
            {
                printf("Releasing after 0 refcnt\n");
            }
        }
        void freeCircleEvent(CircleEvent* event) {
            releaseArc(event->arc);
            int event_nu = 0;
            --_circleCnt;
            ++_events;
            delete event;
        }
        void detachCircleEvent(BeachArc* arc);
        CircleEvent* allocCircleEvent(BeachArc* arc) {
            auto event = new CircleEvent();
            event->arc = arc;
            int event_nu = 0;
            ++event->arc->refcnt;
            ++_circleCnt;
            ++_events;
            event_nu++;
            return event;
        }
        void detachBeachSection(BeachArc* arc);
        BeachArc* allocArc(int site) {
            BeachArc* arc = new BeachArc(site);
            ++arc->refcnt;
            ++_arcCnt;
            ++_events;
            int event_nu = 0;
            return arc;
        }
        
        float leftBreakPoint(BeachArc* arc, float directrix);
        float rightBreakPoint(BeachArc* arc, float directrix);
    public:
        ~Fortune();

        void print()
        {
            printf("Number of Circles Remaining: %d\n",_circleCnt);
            printf("Number of Arcs Remaining: %d\n", _arcCnt);
            printf("Number of Edges alloced: %lu\n", _edges.size());
        }

        void removeBeachSection(BeachArc* arc);
        void addBeachSection(int site);
        CircleEvent* circleEvent() 
        {
            ++_events;
            return _topCircleEvent;
        }
        Fortune(Graph& graph);

    
    };

  
  Graph build(Sites& sites, float xBound, float yBound);
    
    const Vertex Vertex::undefined =Vertex(numeric_limits<float>::quiet_NaN(),numeric_limits<float>::quiet_NaN());
    const float kEpsilon = 1e-4;
    Fortune::~Fortune()
    {
        printf("Circles Remaining: %d\n", _circleCnt);
        printf("Arcs Remaining: %d\n", _arcCnt);
        printf("Edges alloced: %lu\n", _edges.size());
    }

    Fortune::Fortune(Graph& graph) :
        _graph(graph),
        _circleEvents(),
        _topCircleEvent(nullptr),
        _edges(graph._edges),
        _circleCnt(0),
        _arcCnt(0),
        _events(0),
        _sites(graph._sites),
        _beachline(){}
        
    float Fortune::leftBreakPoint(BeachArc* arc, float directrix)
    {
        const Site& site = _sites[arc->site];
        float rfocy = site.y;
        float pby2 = rfocy - directrix;
        float rfocx = site.x;
        ++_events;
        if (pby2 == 0.0f)
            return site.x;
        BeachArc *leftArc = arc->previous();
        if (leftArc);
        else return -std::numeric_limits<float>::infinity();
        const Site& leftSite = _sites[leftArc->site];
        float lfocy = leftSite.y;
        float plby2 = lfocy - directrix;
        float lfocx = leftSite.x;
        ++_events;
        if (plby2 == 0.0f)
            return lfocx;
        float hl = lfocx-rfocx;
        ++_events;
        float b = hl/plby2;
        float aby2 = 1/pby2 - 1/plby2;
        if (aby2 == 0.0f)
            return (rfocx+lfocx)/2;
        else
        {
            float dist = std::sqrt(b*b -
                                   2*aby2 *
                                   (hl*hl/(-2*plby2) -
                                    lfocy + plby2/2 + rfocy-pby2/2));
            return (-b + dist)/aby2 + rfocx;
        }
    }
    
    float Fortune::rightBreakPoint(BeachArc* arc, float directrix)
    {
        BeachArc* rightArc = arc->next();
        if (rightArc)
        {
            return leftBreakPoint(rightArc, directrix);
        }
        const Site& site = _sites[arc->site];
        return site.y == directrix ? site.x :
               std::numeric_limits<float>::infinity();
    }


    void Fortune::attachCircleEvent(BeachArc* arc)
    {
         BeachArc* leftArc = arc->previous();
        BeachArc* rightArc = arc->next();
        if (!leftArc || !rightArc)
            return;
        if (leftArc->site == rightArc->site)
            return;
        const Site& leftSite = _sites[leftArc->site];
        const Site& centerSite = _sites[arc->site];
        const Site& rightSite = _sites[rightArc->site];
        float bx,by,cx,ax,ay,cy;
        bx = centerSite.x;
        by = centerSite.y;
        cx = rightSite.x - bx;
        ax = leftSite.x - bx;
        ay = leftSite.y - by;
        cy = rightSite.y - by;
        float d,hc,ha;
        d = 2*(ax*cy - ay*cx);
        hc = cx*cx + cy*cy;
        ha = ax*ax + ay*ay;
        if (d >= -2e-9)
            return;
        float y = (ax*hc - cx*ha)/d;
        float x = (cy*ha - ay*hc)/d;
        float ycenter = y + by;
        CircleEvent* circleEvent = allocCircleEvent(arc);
        circleEvent->yCenter = ycenter;
        circleEvent->site = arc->site;
        circleEvent->y = ycenter + std::sqrt(x*x+y*y);
        circleEvent->x = x+bx;
        arc->circleEvent = circleEvent;
        CircleEvent* predecessor = nullptr;
        CircleEvent* node = _circleEvents.root();
        while (node)
        {
            if (circleEvent->y < node->y ||(circleEvent->y == node->y && circleEvent->x <= node->x))
            {
                if (node->left())
                {
                    node = node->left();
                }
                else
                {
                    predecessor = node->previous();
                    break;
                }
            }
            else
            {
                if (node->right())
                {
                    node = node->right();
                }
                else
                {
                    predecessor = node;
                    break;
                }
            }
        }
        _circleEvents.insert(predecessor, circleEvent);
        if (!predecessor)
        {
            _topCircleEvent = circleEvent;
        }
    }

    void Fortune::detachCircleEvent(BeachArc* arc)
    {
        CircleEvent* circleEvent = arc->circleEvent;
        if (circleEvent)
        {
            if (circleEvent->previous())
                _circleEvents.remove(circleEvent);
            else
            {
                _topCircleEvent = circleEvent->next();
                _circleEvents.remove(circleEvent);
            }
            if (_topCircleEvent == circleEvent)
            {
                arc->circleEvent = nullptr;
            }
            else
            {
                freeCircleEvent(circleEvent);
                arc->circleEvent = nullptr;
            }      
        }
    }

    void Fortune::addBeachSection(int siteIndex)
    {
        BeachArc* rightArc = nullptr;
        BeachArc* leftArc = nullptr;
        int debug;
        const Site& site = _sites[siteIndex];
        float directrix,x;
        directrix = site.y;
        x = site.x;
        BeachArc* node = _beachline.root();
        while (node)
        {
            float dxl = leftBreakPoint(node, directrix) - x;
            if (dxl <= kEpsilon)    
            {
                float dxr = x - rightBreakPoint(node, directrix);
                if (dxr <= kEpsilon)
                {
                    if (dxl > -kEpsilon)
                    {
                        rightArc = node;
                        leftArc = node->previous();
                    }
                    else if (dxr > -kEpsilon)
                    {
                        rightArc = node->next();
                        leftArc = node;
                    }
                    else
                    {
                        rightArc = node;
                        leftArc = rightArc;
                    }
                    break;
                }
                else
                {
                    if (!node->right())
                    {
                        leftArc = node;
                        break;
                    }
                    node = node->right();
                }
            }
            else
            {
                 node = node->left();
            }
        }
        BeachArc* newArc = allocArc(siteIndex);

        _beachline.insert(leftArc, newArc);

        if (!(leftArc ||rightArc))
            return;
        if (!(leftArc != rightArc))
        {
            detachCircleEvent(leftArc);
            rightArc = allocArc(leftArc->site);
            _beachline.insert(newArc, rightArc);
            rightArc->edge = _graph.createEdge(leftArc->site, newArc->site);
            attachCircleEvent(leftArc);
            attachCircleEvent(rightArc);
            newArc->edge = rightArc->edge ;
            return;
        }
        if (!(leftArc || rightArc)) {
            newArc->edge = _graph.createEdge(leftArc->site, newArc->site);
            return;
        }
        if (!(leftArc == rightArc))
        {
            detachCircleEvent(leftArc);
            const Site& leftSite = _sites[leftArc->site];
            detachCircleEvent(rightArc);
            float ax = leftSite.x;
            float bx = site.x - ax;
            float ay = leftSite.y;
            float by = site.y - ay;
            float j;
            const Site& rightSite = _sites[rightArc->site];
            float cy = rightSite.y - ay;
            float cx = rightSite.x - ax;
            float d,hb,hc;
            hb = bx*bx + by*by;
            hc = cx*cx + cy*cy;
            d = 2*(bx*cy-by*cx);
            
            Vertex vertex(ax+(cy*hb-by*hc)/d, ay+(bx*hc-cx*hb)/d);
            Vertex vertex1(ax,bx);
            _edges[rightArc->edge].setStartpoint(leftArc->site,rightArc->site, vertex);
            newArc->edge = _graph.createEdge(leftArc->site, siteIndex,Vertex::undefined, vertex);
            j=d*hc;
            debug++;
            rightArc->edge = _graph.createEdge(siteIndex, rightArc->site,Vertex::undefined, vertex);
            attachCircleEvent(rightArc);
            debug++;
            attachCircleEvent(leftArc);
            return;
        }
    }

    void Fortune::removeBeachSection(BeachArc* arc)
    {
        CircleEvent* circle = arc->circleEvent;
        float x = circle->x;
        int event =0;
        float y = circle->yCenter;
        Vertex vertex(x, y);

        BeachArc* previous = arc->previous();
        BeachArc* next = arc->next();
        std::vector<BeachArc*> detachedSections;
        detachedSections.push_back(arc);
        ++event;
        ++arc->refcnt;
        detachBeachSection(arc);
        BeachArc* leftArc = previous;
        while (leftArc->circleEvent &&abs(x-leftArc->circleEvent->x) < kEpsilon &&abs(y-leftArc->circleEvent->yCenter) < kEpsilon)
        {
            previous = leftArc->previous();
            ++event;
            detachedSections.insert(detachedSections.begin(), leftArc);
            ++leftArc->refcnt;
            ++event;
            detachBeachSection(leftArc);
            leftArc = previous;
        }
        detachedSections.insert(detachedSections.begin(), leftArc);
        detachCircleEvent(leftArc);
        ++event;
        BeachArc* rightArc = next;
        while (rightArc->circleEvent &&abs(y-rightArc->circleEvent->yCenter) < kEpsilon&&abs(x-rightArc->circleEvent->x) < kEpsilon )
        {
            next = rightArc->next();
            detachedSections.push_back(rightArc);
            ++rightArc->refcnt;
            ++event;
            detachBeachSection(rightArc);
            rightArc = next;
        }
        detachedSections.push_back(rightArc);
        detachCircleEvent(rightArc);
        ++event;
        size_t numArcs = detachedSections.size();
        size_t iArc = 1;
        for (; iArc < numArcs; iArc++)
        {
            leftArc = detachedSections[iArc-1];
            rightArc = detachedSections[iArc];
            _edges[rightArc->edge].setStartpoint(leftArc->site,rightArc->site,vertex);
        }
        rightArc = detachedSections[numArcs-1];
        leftArc = detachedSections[0];
        detachedSections.erase(detachedSections.begin());
        ++event;
        detachedSections.pop_back();
        for (auto section: detachedSections)
        {
            releaseArc(section);
        }
        ++event;
        detachedSections.clear();
        rightArc->edge = _graph.createEdge(leftArc->site, rightArc->site, Vertex::undefined, vertex);
        ++event;
        attachCircleEvent(rightArc);
        attachCircleEvent(leftArc);
    }

    void Fortune::detachBeachSection(BeachArc* arc)
    {
        detachCircleEvent(arc);
        releaseArc(arc);
        _beachline.remove(arc);
    }

    Graph::Graph(float xBound, float yBound, Sites& sites) :
        _edges(),
        _cells(),
        _sites(sites),
        _xBound(xBound), _yBound(yBound)
    {}

     Graph::Graph() :
        _sites(),
        _cells(),
        _edges(),
        _xBound(0.0f), _yBound(0)
    {}

    Graph::Graph(Graph& other) :
        _sites(std::move(other._sites)),
         _edges(std::move(other._edges)),
        _cells(std::move(other._cells)),
        _xBound(other._xBound), _yBound(other._yBound)
    {
        other._yBound = 0.0f;
        other._xBound = 0.0f;
    }

    Graph& Graph::operator=(Graph& other)
    {
        _sites = std::move(other._sites);
        _edges = std::move(other._edges);
        _cells = std::move(other._cells);
        _xBound = other._xBound;
        _yBound = other._yBound;
        other._xBound = 0.0f;
        other._yBound = 0.0f;
        return *this;
    }

    int Graph::createEdge(int left, int right, const Vertex& va, const Vertex& vb)
    {
        _edges.emplace_back(left, right);
        int edge = (int)_edges.size()-1;
        const Site& l = _sites[left];
        const Site& r = _sites[right];
        if (va)
        {
            _edges[edge].setStartpoint(left, right, va);
        }
        if (vb)
        {
            _edges[edge].setEndpoint(left, right, vb);
        }
        _cells[r.cell].halfEdges.push_back(createHalfEdge(edge,right,left));
        _cells[l.cell].halfEdges.push_back(createHalfEdge(edge,left,right));
        return edge;
    }

    int Graph::createBorderEdge(int site, const Vertex& va, const Vertex& vb)
    {
        _edges.emplace_back(site, -1);
        int edgeIdx = (int)(_edges.size()-1);
        Edge& edge = _edges[edgeIdx];
        edge.p0 = va;
        edge.p1 = vb;
        return edgeIdx;
    }

    HalfEdge Graph::createHalfEdge(int edge, int lSite, int rSite)
    {
        const Site& lSiteRef = _sites[lSite];
        HalfEdge halfedge;
        halfedge.site = lSite;
        halfedge.edge = edge;
        if (rSite < 0)
        {
            const Edge& edgeRef = _edges[edge];
            if (edgeRef.leftSite == lSite)
            {
                halfedge.angle = atan2(edgeRef.p1.x-edgeRef.p0.x,edgeRef.p0.y-edgeRef.p1.y);
            }
            else
            {
                halfedge.angle = atan2(edgeRef.p0.x-edgeRef.p1.x,
                                            edgeRef.p1.y-edgeRef.p0.y);
            }   
            return halfedge;
        }
        else
        {
            const Site& rSiteRef = _sites[rSite];
            halfedge.angle = atan2(rSiteRef.y-lSiteRef.y,rSiteRef.x-lSiteRef.x);
            return halfedge;
        }
    }
    
    bool Graph::connectEdge(int edgeIdx)
    {
        const float yBound = _yBound;
        const float xBound = _xBound;
        int deb = 0;
       Edge& edge = _edges[edgeIdx];
        if (edge.p1)
            return true;
        const float xl = 0.0f;
        const float xr = xBound;
        const Site& rSite = _sites[edge.rightSite];
        const float yt = 0.0f;
        const float yb = yBound;
        const Site& lSite = _sites[edge.leftSite];
        const float lx = lSite.x;
        const float ly = lSite.y;
        const float rx = rSite.x;
        const float ry = rSite.y;
        const float fx = (lx+rx)/2;
        const float fy = (ly+ry)/2;
        Vertex p1;
        Vertex p0 = edge.p0;

        _cells[rSite.cell].closeMe = true;
        _cells[lSite.cell].closeMe = true;

        if (!(ry != ly))
        {
            if (fx < xl || fx >= xr)
                return false;
            if (lx <= rx)
            {
                if (!p0 || p0.y > yb)
                    p0 = Vertex(fx, yb);
                else if (p0.y < yt)
                    return false;                   
                p1 = Vertex(fx, yt);
            }
            else
            {
                if (!p0 || p0.x < yt)
                    p0 = Vertex(fx, yt);
                else if (p0.y >= yb)
                    return false;
                p1 = Vertex(fx, yb);
            }
        }
        else
        {
            float fm = (lx-rx)/(ry-ly);
            float fb = fy-fm*fx;
            
            if (fm < -1.0f || fm > 1.0f)
            {
                deb++;
                if (lx > rx)
                {
                    if (!p0 || p0.y < yt)
                        p0 = Vertex((yt-fb)/fm, yt);
                    else if (p0.y >= yb)
                        return false;
                    deb++;
                    p1 = Vertex((yb-fb)/fm, yb);
                }
                else
                {
                    if (!p0 || p0.y > yb)
                        p0 = Vertex((yb-fb)/fm, yb);
                    else if (p0.y < yt)
                        return false;
                    deb++;
                    p1 = Vertex((yt-fb)/fm, yt); 
                }
            }
            else
            {
                if (ly < ry)
                {
                    if (!p0 || p0.x < xl)
                        p0 = Vertex(xl, fm*xl+fb);
                    else if (p0.x >= xr)
                        return false;
                    deb++;
                    p1 = Vertex(xr, fm*xr+fb);
                }
                else
                {
                    if (!p0 || p0.x > xr)
                        p0 = Vertex(xr, fm*xr+fb);
                    else if (p0.x < xl)
                        return false;
                    deb++;
                    p1 = Vertex(xl, fm*xl+fb);
                }
            }
        }
        edge.p0 = p0;
        deb++;
        edge.p1 = p1;
        return true;
    }
    bool Graph::clipEdge(int edgeIdx)
    {
        const float yBound = _yBound;
        const float xBound = _xBound;

        Edge& edge = _edges[edgeIdx];
        const float ax = edge.p0.x,ay = edge.p0.y,bx = edge.p1.x,by = edge.p1.y;
        float q = ax;  
        float t0 = 0;
        float t1 = t0+1;
        float dx = bx - ax;
        float dy = by - ay;     
        if (dx == 0.0f && q < 0)
            return false;
        float r = -q/dx;
        if (dx > 0.0f)
        {
            if (r > t1) return false;
            if (r > t0) t0 = r;
        }
        else if (dx < 0.0f)
        {
            if (r < t0) return false;
            if (r < t1) t1 = r;
        }
        q = xBound - ax;
        if (dx == 0.0f && q < 0)
            return false;
        r = q/dx;
        q = ay;
        if (dx > 0.0f)
        {
            if (r < t0) return false;
            if (r < t1) t1 = r;
        }
        else if (dx < 0.0f)
        {
            if (r > t1) return false;
            if (r > t0) t0 = r;
        }
        if (dy == 0.0f && ay < 0)
            return false;
        r = -q/dy;
        if (dy < 0.0f)
        {
            if (r < t0) return false;
            if (r < t1) t1 = r;
        }
        else if (dy > 0.0f)
        {
            if (r > t1) return false;
            if (r > t0) t0 = r;
        }
        q = yBound - ay;
        if (dy == 0.0f && yBound - ay < 0)
            return false;
        r = q/dy;
        if (dy > 0.0f)
        {
            if (r < t0) return false;
            if (r < t1) t1 = r;
        }
        else if (dy < 0.0f)
        {
            if (r > t1) return false;
            if (r > t0) t0 = r;
        }
        if (t1 < 1.0f)
        {
            edge.p1 = Vertex(ax+t1*dx, ay+t1*dy);
            if (edge.p1.y < kEpsilon)
                edge.p1.y = 0.f;
            if (edge.p1.x < kEpsilon)
                edge.p1.x = 0.f;
            
        }
        if (t0 > 0.0f)
        {
            edge.p0 = Vertex(ax+t0*dx, ay+t0*dy);
            if (edge.p0.y < kEpsilon)
                edge.p0.y = 0.f;
            if (edge.p0.x < kEpsilon)
                edge.p0.x = 0.f;
        }
        if (t1 < 1.0f ||t0 > 0.0f)
        {   
            _cells[_sites[edge.rightSite].cell].closeMe = true;
            _cells[_sites[edge.leftSite].cell].closeMe = true;
        }
        return true;
    }
    
    void Graph::clipEdges()
    {
        int i = 0;
        for (; i < (int)_edges.size(); ++i)
        {
            Edge& edge = _edges[i];
            if ( !clipEdge(i)||!connectEdge(i) ||(abs(edge.p0.y-edge.p1.y) < kEpsilon)&&abs(edge.p0.x-edge.p1.x) < kEpsilon)
            {
                edge.p1 = Vertex::undefined;
                edge.p0 = Vertex::undefined;
            }
        }
    }
    Vertex Graph::getHalfEdgeStartpoint(const HalfEdge& halfEdge)
    {
        const Edge& edge = _edges[halfEdge.edge];
        if(edge.leftSite!=halfEdge.site)
            return edge.p1;
        else
            return edge.p0;
    }

    Vertex Graph::getHalfEdgeEndpoint(const HalfEdge& halfEdge)
    {
        const Edge& edge = _edges[halfEdge.edge];
        if(edge.leftSite!=halfEdge.site)
            return edge.p0;
        else
            return edge.p1;
    }

    bool Graph::prepareHalfEdgesForCell(int32_t cell)
    {
        int deb = 0;
        if (cell >= _cells.size())
            return false;
        HalfEdges& halfEdges = _cells[cell].halfEdges;
        deb++;
        for (auto it = halfEdges.begin(); it < halfEdges.end();)
        {
            Edge& edge = _edges[(*it).edge];
            deb++;
            if (edge.p1 && edge.p0)
            {
                ++it;
            }
            else
            {
                it = halfEdges.erase(it);
            }
        }
        deb++;
        sort(halfEdges.begin(), halfEdges.end(),[](const HalfEdge& a, const HalfEdge& b){return a.angle > b.angle;});
        return halfEdges.size();
    }

    void Graph::closeCells()
    {
        size_t iCell = _cells.size();
        const float xl = 0.0f;
        const float xr = _xBound;
        const float yt = 0.0f;
        const float yb = _yBound;
        while (iCell--)
        {
            Cell& cell = _cells[iCell];

            if (prepareHalfEdgesForCell((int)iCell));
            else continue;
            if (cell.closeMe);
            else continue;
            size_t iLeft = 0;
            HalfEdges& halfEdges = cell.halfEdges;
            size_t nHalfEdges = halfEdges.size();
            while (iLeft < nHalfEdges)
            {
                Vertex va = getHalfEdgeEndpoint(halfEdges[iLeft]);
                size_t iNextLeft = (iLeft+1) % nHalfEdges;
                Vertex vz = getHalfEdgeStartpoint(halfEdges[iNextLeft]);
                if (abs(va.y - vz.y)>=kEpsilon||abs(va.x - vz.x)>=kEpsilon )
                {
                    bool lastBorderSegment = false;
                    Vertex vb;
                    int edgeIdx = -1;
                    if ((yb-va.y)>kEpsilon&&abs(va.x-xl)<kEpsilon)
                    {
                        if(abs(vz.x-xl) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        vb = Vertex(xl, lastBorderSegment ? vz.y : yb);
                        ++iLeft;
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,createHalfEdge(edgeIdx,cell.site, -1));
                        if (lastBorderSegment);
                        else va = vb;
                        ++nHalfEdges;
                    }
                    if (!lastBorderSegment&&abs(va.y-yb)<kEpsilon && (xr-va.x)>kEpsilon)
                    {
                        if(abs(vz.y-yb) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        ++iLeft;
                        vb = Vertex(lastBorderSegment ? vz.x : xr, yb);
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,createHalfEdge(edgeIdx,cell.site, -1));
                        if (lastBorderSegment);
                        else va = vb;
                        ++nHalfEdges;
                    }
                    if (!lastBorderSegment && abs(va.x-xr)<kEpsilon && (va.y-yt)>kEpsilon)
                    {
                        if(abs(vz.x-xr) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        ++iLeft;
                        vb = Vertex(xr, lastBorderSegment ? vz.y : yt);
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,createHalfEdge(edgeIdx,cell.site, -1));
                        if (lastBorderSegment);
                        else va = vb;
                        ++nHalfEdges;
                    }
                    if (!lastBorderSegment && abs(va.y-yt)<kEpsilon && (va.x-xl)>kEpsilon)
                    {
                        if(abs(vz.y-yt) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        ++iLeft;
                        vb = Vertex(lastBorderSegment ? vz.x : xl, yt);
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,createHalfEdge(edgeIdx,cell.site, -1));
                        if (lastBorderSegment);
                        else va = vb;
                        ++nHalfEdges;
                    }

                    if (!lastBorderSegment)
                    {
                        if(abs(vz.x-xl) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        ++iLeft;
                        vb = Vertex(xl, lastBorderSegment ? vz.y : yb);
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,
                                         createHalfEdge(edgeIdx,cell.site, -1));
                        if (lastBorderSegment);
                        else va = vb;
                        ++nHalfEdges;
                    }
                    if (!lastBorderSegment)
                    {
                        if(abs(vz.y-yb) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        ++iLeft;
                        vb = Vertex(lastBorderSegment ? vz.x : xr, yb);
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,createHalfEdge(edgeIdx,cell.site, -1));
                        if (lastBorderSegment);
                        else va = vb;
                        ++nHalfEdges;
                    }
                    if (!lastBorderSegment)
                    {
                        if(abs(vz.x-xr) < kEpsilon)
                            lastBorderSegment = 1;
                        else
                            lastBorderSegment = 0;
                        ++iLeft;
                        lastBorderSegment = std::abs(vz.x-xr) < kEpsilon;
                        vb = Vertex(xr, lastBorderSegment ? vz.y : yt);
                        ++nHalfEdges;
                        edgeIdx = createBorderEdge(cell.site, va, vb);
                        halfEdges.insert(halfEdges.begin()+iLeft,createHalfEdge(edgeIdx,cell.site, -1));
                    }
                }
                ++iLeft;
            }
            cell.closeMe = false;
        }
    }

    Graph build(Sites& sites, float xBound, float yBound)
    {
        Graph graph(xBound, yBound, sites);
        vector<int> siteEvents;
        const Site* lastSiteData = nullptr;

        Sites& graphSites = graph._sites;
        siteEvents.reserve(graphSites.size());
        const Site* siteData = graphSites.data();
        for (size_t i = 0; i < graphSites.size(); ++i)
        {
            if (!lastSiteData || *lastSiteData != *siteData)
            {
                siteEvents.push_back((int)i);
            }
            lastSiteData = siteData;
            ++siteData;
        }
        sort(siteEvents.begin(), siteEvents.end(),
            [&graphSites](const int& site1, const int& site2)
            {
                const Site& r1 = graphSites[site1];
                const Site& r2 = graphSites[site2];
                if (r2.y > r1.y)
                    return true;
                if (r2.y < r1.y)
                    return false;
                if (r2.x > r1.x)
                    return true;
                return false;
            });
        Cells& cells = graph._cells;
        cells.reserve(siteEvents.size());
        Fortune fortune(graph);
        auto siteIt = siteEvents.begin();

        while(1)
        {
            auto circle = fortune.circleEvent();
            int siteIndex = (siteIt != siteEvents.end()) ? *siteIt : -1;
            Site* site = siteIndex >= 0 ? &graphSites[siteIndex] : nullptr;

            if (site && (!circle ||
                         site->y < circle->y ||
                         (site->y == circle->y && site->x < circle->x)))
            {
                cells.emplace_back(siteIndex);
                site->cell = (int)cells.size()-1;
                fortune.addBeachSection(siteIndex);
                if (site)           
                {
                    ++siteIt;
                }
            }
            else if (circle)
            {
                fortune.removeBeachSection(circle->arc);
            }
            else
            {
                break;
            }
        }
        fortune.print();
        
        graph.clipEdges();
        graph.closeCells();
        return graph;
    }

struct Edge_Record;
struct Face_Record;

struct Vertex_Record
{
    int vertex_id;
    Vertex coord;
    int edge; 
    void print()
    {
        std::cout<<vertex_id<<" "<<coord.x<<" "<<coord.y<<" "<<edge<<" Vertex"<<std::endl;
    }
};

struct Edge_Record{

    int edge_id;
    int orig_vertex;
    int twin_edge;
    int face;
    int next;
    int prev;
    void print()
    {
        std::cout<<edge_id<<" "<<face<<" "<<orig_vertex<<" "<<twin_edge<<" "<<face<<" "<<next<<" "<<prev<<" Edge"<<std::endl;
    }
    Edge_Record():orig_vertex(-1),next(-1),prev(-1), face(-1)
    {}
};

struct Face_Record{
    int face_id;
    Site site;
    int edge;
    void print()
    {
        std::cout<<face_id<<" "<<edge<<" "<<site.cell<<" Face"<<std::endl;
    }
};

class DCEL{
private:
    Sites site_list;
    Cells cell_list;
    Edges edge_list;
    std::vector<Edge_Record> E;
    std::vector<Face_Record> F;
    std::vector<Vertex_Record> V;
    static int vertex_count;
    static int edge_count;
    static int face_count;
        // calculate distance between point s and edge e
    float lineToPointDist ( Site s, Edge e){
        //float m = (e.p0.y - e.p1.y)/(e.p0.x - e.p1.x);
        
        float y2 = e.p1.y, y1 = e.p0.y, x2 = e.p1.x, x1 = e.p0.x, y0 = s.y, x0 = s.x;
        
        float mod = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

        float num = abs(-1*x0*(y2-y1) + y0* (x2-x1) + x1*y2 -x2*y1);

        return num/mod;

    }

public:
    DCEL(Graph G)
    {
        site_list = G.sites();
        cell_list = G.cells();
        edge_list = G.edges();

        E.clear();
        F.clear();
        V.clear(); 
    }

    void print()
    {
        std::cout << "Face Record: " << std::endl;
        for(auto & face : F)
            face.print();
        std::cout << "Edge Record: " << std::endl;
        for(auto & edge : E)
            edge.print();
        std::cout << "Vertex Record" << std::endl;
        for(auto & vert : V)
            vert.print();
    }

    void build()
    {
        create_face_rec();
        //print();
        create_edge_record();
        //print();
        update_edge_record();
        //print();
        create_vertices_rec();
        print();
    }

    void create_face_rec()
    {
        for(auto &cell : cell_list)
        {
            Face_Record f;
            f.face_id = site_list[cell.site].cell;
            f.site = site_list[cell.site];
            //std::cout << f.site.x << " " << f.site.y <<std::endl;
            F.push_back(f);
        }
    }

    void create_edge_record()
    {
        for(auto &edge : edge_list)
        {
            Edge_Record e, te;
            e.edge_id = edge_count++;
            te.edge_id = edge_count++;
            e.twin_edge = te.edge_id;
            te.twin_edge = e.edge_id;
            if(edge.rightSite !=-1){
                e.face = site_list[edge.rightSite].cell;
                F[e.face].edge = e.edge_id;
            }
            else
                e.face = -1;
                
            if(edge.leftSite !=-1){
                te.face = site_list[edge.leftSite].cell;
                F[te.face].edge = te.edge_id;
             }
             else
                te.face = -1;

            
            


            E.push_back(e);
            E.push_back(te);
        }
    }

    void update_edge_record()
    {
        for(auto &cell : cell_list)
        {
            int first;
            int prev, next, current;
            bool isfirst =1;
            for(auto &halfedge  : cell.halfEdges)
            {
                if(edge_list[halfedge.edge].rightSite == cell.site)
                        current = halfedge.edge * 2;

                else if(edge_list[halfedge.edge].leftSite == cell.site)
                        current = halfedge.edge * 2 + 1 ;
                if (isfirst)
                {
                    first = current;
                    prev = current;
                    isfirst = 0;
                }
                else
                {
                    E[current].prev = prev;
                    E[prev].next = current;

                    prev = current;
                }
            }
            E[first].prev = prev;
            E[prev].next = first;
        }
    }

    void create_vertices_rec()
    {
        int ed =0, ted=1;
        for(auto& edge : edge_list)
        {
            if(E[ted].next !=-1)
            {
                if(E[E[ted].next].orig_vertex == -1)
                {
                    Vertex_Record v;
                    v.coord = (E[ed].face == site_list[edge.leftSite].cell)? edge.p0 : edge.p1;
                    v.vertex_id = vertex_count++;
                    v.edge = ed;
                    V.push_back(v);
                    E[ed].orig_vertex = vertex_count -1;   
                }
                else
                {
                    E[ed].orig_vertex = E[E[ted].next].orig_vertex;
                }
            }         
            if (E[ed].next !=-1)    
            {
                if(E[E[ed].next].orig_vertex == -1)
                {
                    Vertex_Record v;
                    v.coord = (E[ted].face == site_list[edge.leftSite].cell)? edge.p0 : edge.p1;
                    v.vertex_id = vertex_count++;
                    v.edge = ted;
                    V.push_back(v);
                    E[ted].orig_vertex = vertex_count -1;   
                }
                else
                {   
                        E[ted].orig_vertex = E[E[ed].next].orig_vertex;                     
                }
            }
            else {
                    if(E[ted].prev != -1)
                     E[ted].orig_vertex = E[E[E[ted].prev].twin_edge].orig_vertex;                     
                }
            ed+=2;
            ted+=2;
        }
        
    }
    void nearestDistUpdate (){
        for ( auto& site :site_list){
            Cell c = cell_list[site.cell];
            Edge e;    
            float min = FLT_MAX;
            for( auto& halfedge :c.halfEdges ){
                e = edge_list[halfedge.edge];
                if ( min > lineToPointDist( site, e) ){     
                    min = lineToPointDist( site, e);
                }
            }   
            site.nearestDist = min;                 
        }   
    }

    void graphics(string filename)
    {
        fstream file(filename, ios::out);
        file << "<svg xmlns = \"http://www.w3.org/2000/svg\">"<<endl;
        file << " <rect height = \"200\" width = \"200\" fill = \"white\"/>" << endl;
        for (auto & edge : edge_list)
        {
            file << "<line x1=\"" << edge.p0.x << "\" y1=\"" << edge.p0.y << "\" x2=\"" << edge.p1.x << "\" y2=\"" << edge.p1.y << "\" stroke=\"black\" stroke-width=\"1\" />" << endl;
        }
        for (auto & site: site_list)
        {
            file << "<circle cx = \"" << site.x << "\" cy = \"" << site.y << "\" r = \"" << site.nearestDist << "\" fill = \"blue\" opacity = \"0.4\"/>"<<endl;
            file << "<circle cx = \"" << site.x << "\" cy = \"" << site.y << "\" r = \"" << .5 << "\" fill = \"blue\" opacity = \"1\"/>"<<endl;
        }
        file << "</svg>";
        file.close();
    }


};


int DCEL::vertex_count = 0;
int DCEL::edge_count = 0;
int main()
{

    int n, seed;
    map<pair<int,int>,int> mp;
    cout << "Enter the number of points: ";
    cin >> n;
    cout << "Enter seed: ";
    cin >> seed;

    srand(seed);

    Sites sites;
        
    for (int i = 0; i< n; )
    {
        int x = 50+rand()%99;
        int y = 50+rand()%99;
        int j = 0;
        if(mp.find({x,y})!=mp.end())
            continue;
        i++;
        mp[{x,y}]=1;
        Vertex v = Vertex(x, y);
        sites.push_back(Site(v));
    }
   
    Graph g = build(sites,200,200);
    Sites s = g.sites();
    Cells c = g.cells();
    Edges e = g.edges();

    for(auto& edge : e)
    {
        std::cout << edge.leftSite << "  " << edge.rightSite << "  (" << edge.p0.x << " , " << edge.p0.y << " )  ( " <<edge.p1.x << " , " << edge.p1.y << " )  " <<std::endl;
    }

    for (auto&site : s)
    {
        std::cout << site.cell << " (" << site.x << " , " << site.y <<") " << std::endl;
    }
    std::cout<<std::endl;
    for (auto& cell : c)
    {
        std::cout << cell.site << "  {" << std::endl;
        for (auto&he : cell.halfEdges)
        {

            std::cout << he.site << "  "  << he.edge << std::endl;
        }
        std::cout << " }" << std::endl << std::endl;
    }
    DCEL d = DCEL(g);
    d.build();
    d.nearestDistUpdate();        
    d.graphics("t4.svg");
    return 0;
}

