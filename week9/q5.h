typedef struct item {
	int k;
	int j;
} Item;
int itemCmp(Item a, Item b);

/*
for (Vertex cityV = 0; cityV < numCities; cityV++) {
    Edge city2powerEdge1;
    city2powerEdge1.v = cityV;
    city2powerEdge1.w = powerW;
    city2powerEdge1.weight =
        sqrt((float)(cities[cityV].x - powerPlant.x) *
                 (cities[cityV].x - powerPlant.x) +
             (cities[cityV].y - powerPlant.y) *
                 (cities[cityV].y - powerPlant.y));
    GraphInsertEdge(allLineGraph, city2powerEdge1);
    for (Vertex cityW = cityV + 1; cityW < numCities; cityW++) {
        Edge city2cityEdge;
        city2cityEdge.v = cityV;
        city2cityEdge.w = cityW;
        city2cityEdge.weight =
                sqrt((float)(cities[cityV].x - cities[cityW].x) *
                     (cities[cityV].x - cities[cityW].x) +
                     (cities[cityV].y - cities[cityW].y) *
                     (cities[cityV].y - cities[cityW].y));
        GraphInsertEdge(allLineGraph, city2cityEdge);
    }
}

for (Vertex cityV = 0; cityV < numCities; cityV++) {

}
*/