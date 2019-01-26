## Closest Pair of points
* Closest Pair of points is yet another technique of Divide and Conquer. <br>
There are many sources from where you can learn this method but when I tried to learn about it then I struggled and it took me quite
some time to actually understand what this technique actually is.

**Problem :** 
*We are provided with the points and we need to find out the pair of closest point.* <br/>
Naive approch to solve this problem is to calculate the distance between each pair of point and then find out the minimum, But that method
is not efficient as it takes O(n<sup>2</sup>) of time complexity.
### So here is a super simplified explanation of this technique :
**Technique in 1-D :**
* When we talk about the points in 1-D, then this problem becomes really easy. All we need to do is apply the sorting (merge sort) which 
takes O(nlogn) time and Hoorehh!!! we are done.

**Technique in 2-D :**
* The real challenge to is to find out the closest pair of points in 2-D, because now we have 2 coordinates, i.e X and Y. 
* Simple sorting of either of the points wont help us in finding the closest pair of points.

<img src="Images/1-D.jpg" width="400" height="300">

* From this image you can see that the point P1 and P2 are really close with respect to Y axis and points P3 and P4 are close with respect
to X axis But practically we can see that these pairs of points are really far away and the points P5 and P6 are the closest pair here.
* So from this we can conclude that simply sorting according to X axis and Y axis will not lead us to the correct answer.
