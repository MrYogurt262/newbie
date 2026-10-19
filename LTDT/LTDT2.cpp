/*
- Ma trận kề:
+ TC: là ma trận đối xứng, tổng các phần tử trên ma trận bằng 2 lần số cạnh, tổng các phần tử trên hàng hoặc cột u là bậc của đỉnh u (đồ thị vô hướng)
+ TC: có thể không đối xứng, tổng các phần tử của ma trận bằng số cạnh, tổng các phần tử trên hàng u là bán bậc ra của đỉnh u, tổng các phần tử trên cột u là bán bậc vào của đỉnh u. (đồ thị có hướng)
+ Ma trận trọng số (thay giá trị 1,0 thành các trọng số)

- Danh sách cạnh: (biểu diễn khi đồ thị thưa) số lượng cạnh <= 6 lần số đỉnh
+ Đối với đồ thị vô hướng: liệt kê theo thứ tự tăng dần đỉnh đầu của các cạnh, vd liệt kê cạnh <u,v> ko cần liệt kê <v,u>
+ Đối với đồ thị có hướng: mỗi cạnh là bộ có tính đến thứ tự của các đỉnh.
+ trong trường hợp có trọng số thì lưu trọng số ở cuối.

- Danh sách kề: lưu 1 đỉnh, dùng 1 vector (vô hướng , có hướng)
*/