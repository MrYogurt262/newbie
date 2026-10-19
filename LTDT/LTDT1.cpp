/*
-Đơn đồ thị vô hướng (bao gồm đỉnh và cạnh, tồn tại nhiều nhất 1 cạnh, ko có hướng)
-Đa đồ thị vô hướng  (tồn tại nhiều cạnh, ko có hướng, cạnh bội là các cạnh nối cùng một cặp đỉnh)
-Giả đồ thị vô hướng (2 đỉnh của một cạnh ko nhất thiết phải khác nhau, nếu đầu và đuôi của cạnh có cùng đỉnh gọi là khuyên)
-Đơn đồ thị có hướng (cạnh có thứ tự gọi là cung)
-Đa đồ thị có hướng (cung lặp là 2 cạnh cùng bắt đầu và kết thúc )
-Đỉnh kề, cạnh liên thuộc (đỉnh kề nhau khi tồn tại cạnh nối giữa 2 đỉnh, VD; cạnh liên thuộc AB với 2 đỉnh A B)
-Bậc của đỉnh ở trên đồ thị (áp dụng cho đồ thị vô hướng, KH: deg(u), đỉnh treo khi 1 bậc, đỉnh cô lập khi 0 bậc)
+Định lý: đồ thị vô hướng có m cạnh, tổng bậc = 2 * m

-Bán bậc trên dồ thị có hướng:
+ deg+(u) : bán bậc ra (số cung đi ra khỏi đỉnh u)
+ deg-(u) : bán bậc vào (số cung đi vào đỉnh u )
+Định lý: Tổng deg+(u) = tổng deg-(u)
-Đường đi
+ Dãy các đỉnh, 2 đỉnh liên tiếp có cạnh nối
+ Đường đi đơn: Đường đi không đi qua cạnh nào quá 1 lần. z
+ Chu trình: đường đi có điểm đầu trùng với điểm cuối, mỗi cạnh phân biệt
+ Chu trình đơn:  ngoài trừ đỉnh đầu trùng điểm cuối, còn lại ko có 2 đỉnh nào trùng nhau
+ Chu trình ko đơn: bị lặp thêm đỉnh ngoài đỉnh đầu và cuối
- Liên thông: đồ thị vô hướng liên thông nếu luôn tìm được đường đi giữa 2 điểm bất kì
- Thành phần liên thông: vô hướng ko liên thông, thì phân rã ra các thành phần liên thông (1 đỉnh cô lập cũng được coi là thành phần liên thông)
- Liên thông mạnh: Đồ thị có hướng, giữa 2 đỉnh luôn có đường đi vd: u -> v và v -> u
- Liên thông yếu: Đồ thị có hướng khi bỏ hết các chiều mũi tên thì đồ thị đó là liên thông (biến nó thành đồ thị vô hướng)

*/
