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

<img src="https://github.com/soumilk/Algorithms_and_Their_Techniques/blob/master/Images/1-D.png" width="400" height="300">

* From this image you can see that the point P1 and P2 are really close with respect to Y axis and points P3 and P4 are close with respect
to X axis But practically we can see that these pairs of points are really far away and the points P5 and P6 are the closest pair here.
* So from this we can conclude that simply sorting according to X axis and Y axis will not lead us to the correct answer.

###### *Ufff!! So now we need to find out the closest pair of points in 2-D plane and in time complexity of O(nlogn)*<br>

!!! The approach to find the solution to this is really coollllll !!! 

* We are gonna use the standard Eucledian formula to find the distance between the points. eg:<br>
distance in point (p1,p2) and (q1,q2) is = sqrt((p1-q1)<sup>2</sup> + (p2-q2)<sup>2</sup>)
* We are gonna assume here that no two points have the same coordinates.
* Sort the pair of points in X axis and Y axis.
* Make two Partitions of the total points from the series of points sorted by X axis. Name them be P<sub>L</sub> (left part) and P<sub>R</sub>(right part).

<img src="https://github.com/soumilk/Algorithms_and_Their_Techniques/blob/master/Images/points%20collection.png" width="400" height="300">

*There are 2 Cases to this problem:*<br>
        ***Lucky case*** - *When the pair having minimum distance lies in a single side of the partition.*<br>
        ***UnLucky case*** - *When the pair of points having minimum distance lies in either side of the partition.*<br>
        
**Lucky Case :** <br>
    => In this, find recursively the minimum distance among the points in both the parts. <br>
    => Let the minimum distance between a pair in left part be 'dl' and similarly 'dr' in right part. <br>
    => After this take the minimum of dl and dr, let it be d. <br>
    => If your closest pair lies in the single partition then we have solved the problem here :D. <br>
    => But we always need to do a check for the Unlucky case. :'| <br>
    
  <img src="https://github.com/soumilk/Algorithms_and_Their_Techniques/blob/master/Images/dstrip.png" width="400" height="320">
      
**UnLucky Case :**<br>
    => The pair having the minimum distance lies in either side of the partition. <br> 
    => In this case, create an array strip[] that stores all points which are at most d distance away from the middle line dividing the        two sets. <br>
    => Now find the minimum distance in the strip and compare those which have distance less than d.<br>
    => This step may seem to be a O(n<sup>2</sup>) but is actually a constant time step comparing only 7 times.<br>
    => To explain the above step, take a close look to the figure below. <br> 
    => 4 condition can take us to the above conclusion,<br>
       - Each block will only have 1 point because the minimum distance in a portion is d. <br>
       - A block is entirely on either side of the seprating line. <br>
       - If the distance shorter than d exists then distance between the points on either side should be less than d. <br>
       - Point must be in the range of strip. <br>
       <img src="https://github.com/soumilk/Algorithms_and_Their_Techniques/blob/master/Images/Explanation.png" width="400" height="320"><br>
       - The strip is virtually divided into the squares of d/2 X d/2.  
       - From the above figure, We can see that, for the point q the comparisions should be with atmost 7 blocks.
       - So this is how we can see that the closest points among the strip will be found out. 
    <br><br>
 For the code you can visit [this] (https://www.geeksforgeeks.org/closest-pair-of-points-onlogn-implementation/).

    
    
