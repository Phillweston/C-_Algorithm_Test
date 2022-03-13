/*
 * 思路：采用RRT*启发式算法，重写代价函数(cost function)
 * 在地图空间内随机生成一个节点q_rand，然后在已知的路径中找到和q_rand距离最短的节点q
 * 在线段q和qrand找一个点qnew，使得q和qnew的距离为step_size，最后检测qnew是否碰到障碍物，
 * 如果碰到障碍物，则舍弃这个节点
 */
