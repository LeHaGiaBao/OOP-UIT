**BÀI THỰC HÀNH TUẦN 1**
Lưu ý sử dụng struct để định nghĩa kiểu dữ liệu
📌1.	Viết chương trình nhập vào hai phân số (không âm), 
a.	tìm phân số lớn nhất và xuất kết quả.
b.	Tính tổng, hiệu, tích, thương giữa chúng và xuất kết quả.

📌2.	Viết chương trình nhập vào ngày. Tìm ngày kế tiếp và xuất kết quả.

📌3.	Viết chương trình nhập họ tên, điểm toán, điểm văn của một học sinh. Tính điểm trung bình và xuất kết quả.

📌4.	
a.	Viết chương trình nhập vào một mảng n (do người dùng nhập vào) phần tử là các số nguyên và xuất ra mảng theo thứ tự tăng dần.		
b.	Xây dựng cấu trúc điểm biểu diễn điểm trong mặt phẳng Oxy (tọa độ là các số thực). Viết chương trình cho phép người dùng nhập vào n (do người dùng nhập vào) điểm và xuất ra 2 điểm có khoảng cách lớn nhất trong các điểm vừa nhập.

📌5.	  Dựa vào bài 1.b, xây dựng phương thức thiết lập giá trị (SetDiem) gồm 3 thành phần:
-	Tham số 1: điểm cần thiết lập giá trị (truyền tham chiếu)
-	Tham số 2: gán cho hoành độ
-	Tham số 3: gán cho tung độ
Trong đó tham số 2 và 3 là 2 tham số mặc nhiên (=0). Viết chương trình nhập vào n (do người dùng nhập vào) điểm, trong đó việc nhập giá trị cho điểm thứ i sẽ gọi đến phương thức SetDiem nhằm thiết lập giá trị cho điểm theo mô tả sau:
-	Nếu i%3==0: nhập đầy đủ tung độ, hoành độ và gọi phương thức SetDiem với đầy đủ giá trị truyền vào cho tất cả các tham số. 
-	Nếu i%3==1: chỉ nhập hoành độ và gọi phương thức SetDiem với 2 giá trị truyền vào cho tham số 1 và 2.
-	Nếu i%3==2: không nhập vào hoành độ và tung độ và gọi phương thức SetDiem với 1 giá trị tryền vào cho tham số 1.
Xuất ra tọa độ tất cả các điểm và xuất ra 2 điểm có khoảng cách lớn nhất trong các điểm vừa nhập.

**BÀI THỰC HÀNH TUẦN 2**
📌1.	Thiết lập lớp PhanSo để biểu diễn khái niệm phân số với hai thành phần dữ liệu tử số, mẫu số và các hàm thành phần cộng, trừ, nhân, chia hai phân số, các hàm thành phần xuất, nhập, định giá trị cho phân số. Viết chương trình cho phép nhập vào hai phân số, in ra kết quả các phép toán cộng, trừ, nhân, chia hai phân số kể trên.

📌2.	Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo và các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân, chia hai số phức. Viết chương trình cho phép nhập vào hai số phức, in ra kết quả các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
Ví dụ: Cho hai số phức A(a1, a2), B(b1, b2)
•	A + B = (a1+b1, a2+b2)
•	A - B = (a1-b1, a2-b2)
•	A * B = (a1*b1 – a2*b2, a1*b2+a2*b1)
•	A / B =  ((a1*b1 + a2*b2)/(b1*b1 + b2*b2) , (b1*a2 - a1*b2)/(b1*b1 + b2*b2))

📌3.	Xây dựng lớp Candidate (Thí sinh) gồm các thuộc tính: mã, tên, ngày tháng năm sinh, điểm thi Toán, Văn, Anh và các phương thức cần thiết.
Xây dựng lớp TestCandidate để kiểm tra lớp trên:
-	Nhập vào n thí sinh (n do người dùng nhập)
-	In ra thông tin về các thí sinh có tổng điểm lớn hơn 15

📌4.	Thiết lập lớp biểu diễn khái niệm điểm trong mặt phẳng với hai thành phần dữ liệu hoành độ và tung độ. Viết các phương thức thiết lập, các hàm thành phần cho phép thay đổi nội dung của điểm, lấy hoành độ, tung độ, tịnh tiến, quay, nhập, xuất một điểm.

**BÀI THỰC HÀNH TUẦN 3**
📌1.	Thiết lập lớp biểu diễn khái niệm điểm trong mặt phẳng với hai thành phần dữ liệu hoành độ và tung độ. Viết các phương thức thiết lập, các hàm thành phần cho phép thay đổi nội dung của điểm, lấy hoành độ, tung độ, tịnh tiến, quay, nhập, xuất một điểm.

📌2.	Viết định nghĩa lớp TamGiac để biểu diễn khái niệm tam giác trong mặt phẳng với các phương thức thiết lập, huỷ bỏ (nếu có). Các hàm thành phần nhập, xuất, tịnh tiến, quay, phóng to, thu nhỏ.

📌3.	Viết định nghĩa lớp DaGiac để biểu diễn khái niệm đa giác trong mặt phẳng với các hàm thành phần tương tự như lớp TamGiac
Class Dagiac
n đỉnh (do người dùng nhập vào)
Diem *ds;

📌4.	Viết định nghĩa lớp biểu diễn khái niệm thời gian với các thành phần dữ liệu giờ, phút, giây với các thao tác thích hợp.

**BÀI THỰC HÀNH TUẦN 4**
📌1.	Làm lại bài số phức với một phương thức thiết lập duy nhất cho phép quan điểm một số thực như một số phức đặc biệt (phần ảo bằng 0). Định nghĩa các phép toán +, -, *, /, = =, !=, trên số phức. Định nghĩa phép toán << và >> để xuất và nhập dữ liệu vào số phức.

📌2.	Làm lại bài phân số với các phương thức thiết lập cho phép sử dụng một số nguyên như một phân số đặc biệt (mẫu số bằng 1). Định nghĩa các phép toán +, -, *, /, = =, !=, trên phân số. Định nghĩa phép toán << và >> để xuất và nhập dữ liệu vào phân số.

📌3.	Định nghĩa lớp dữ liệu CTimeSpan để biểu diễn khái niệm khoảng thời gian, các hàm thành phần và các phép toán cần thiết. 
bool operator==(CTimeSpan span);
bool operator!=(CTimeSpan span) ;
bool operator<(CTimeSpan span) ;
bool operator>(CTimeSpan span) ;
bool operator<=(CTimeSpan span) ;
bool operator>=(CTimeSpan span) ;
 >>, <<
📌4.	Định nghĩa lớp CTime biểu diễn khái niệm thời điểm có các thành phần giờ phút giây. Định nghĩa các phép toán +, - (cộng, trừ thêm một số nguyên giây), - (phép trừ hai CTime để được một CTimSpan), ++, -- (thêm bớt một giây). Phép toán <<, >> để xuất, nhập dữ liệu loại CTime. 

📌5.	Định nghĩa lớp CDate biểu diễn khái niệm ngày, tháng, năm với các phép toán +, - (cộng, trừ thêm một số ngày), ++, -- (thêm bớt một ngày), - (khoảng cách giữa hai CDate tính bằng ngày). Phép toán <<, >> để xuất, nhập dữ liệu loại CDate. 
Tang() operator ++(int) { tang()} giam;
Mốc só 1 cái gì đó. 0 ,0, 0 -> date1 => tinh so ngay1, date2 -> ngay2 ngay2- ngay1;
Dd/mm/yyy nho hon ++, cout until date1 == date2  => count day

**BÀI THỰC HÀNH TUẦN 5**

📌1.	Giả sử Công ty có hai loại nhân viên: Nhân viên văn phòng và Nhân viên sản xuất. Viết chương trình quản lý và tính lương cho từng nhân viên của công ty:
Mỗi nhân viên cần quản lý các thông tin sau: Họ tên, ngày sinh, lương
Công ty cần tính lương cho nhân viên như sau:
-	Đối với nhân viên sản xuất: 
	Lương=lương căn bản + số sản phẩm * 5.000
-	Đối nhân viên văn phòng: 
	lương = số ngày làm việc * 100.000
Viết chương trình cho phép thực hiện các chức năng sau:
1.	Nhập danh sách nhân viên
2.	Tính lương cho từng nhân viên
3.	Xuất thông tin các nhân viên
4.	Tính tổng lương mà công ty phải trả cho các nhân viên
5.	Tìm nhân viên có lương cao nhất, thấp nhất,…

📌2.	Một nông trại chăn nuôi có 3 loại gia súc: bò, cừu, và dê. Mỗi loại gia súc đều có thể sinh con, cho sữa và phát ra tiếng kêu riêng của chúng. Khi đói, các gia súc sẽ phát ra tiếng kêu để đòi ăn. Sau một thời gian chăn nuôi, người chủ nông trại muốn thống kê xem trong nông trại có bao nhiêu gia súc ở mỗi loại, tổng số lit sữa mà tất cả các gia súc của ông đã cho. 
Áp dụng kế thừa, xây dựng chương trình cho phép người chủ nông trại nhập vào số lượng gia súc ban đầu ở mỗi loại.
a. Một hôm người chủ nông trại đi vắng, tất cả gia súc trong nông trại đều đói. Hãy cho biết những tiếng kêu nghe được trong nông trại.

b. Chương trình sẽ đưa ra thống kê các thông tin người chủ mong muốn (nêu trên) sau một lứa sinh và một lượt cho sữa của tất cả gia súc. Biết rằng:
-    Tất cả gia súc ở mỗi loại đều sinh con.
-    Số lượng sinh của mỗi gia súc là ngẫu nhiên.
-    Tất cả gia súc ở mỗi loại đều cho sữa.
-    Số lit sữa mỗi gia súc cho là ngẫu nhiên nhưng trong giới hạn sau:
•   Bò: 0 – 20 lít.
•   Cừu: 0 – 5 lít.
•   Dê: 0 – 10 lít.

📌3.Một công ty ABC chuyên kinh doanh cho thuê nhà cho thuê 1 trong 2 loại căn hộ sau:
- 	Căn hộ chung cư
- 	Căn hộ thường
Đối với căn hộ chung cư, công ty cần quản lý các thông tin sau: địa chỉ căn hộ, ở tầng thứ mấy, tiền đặt cọc, tiền thuê hàng tháng, tình trạng căn hộ ( còn trống hay đang cho thuê ) 
Đối với căn hộ thường: địa chỉ căn hộ, bao nhiêu tầng, tiền đặt cọc, tiền thuê hàng tháng, tình trạng căn hộ ( còn trống hay đang cho thuê ).
Xây dựng chương trình quản lý việc cho thuê nhà của công ty gồm n căn hộ, chương trình bao gồm các chức năng chính sau:
+ Cho phép nhập danh sách căn hộ 
+ Hiển thị danh sách thông tin chi tiết các căn hộ mà công ty đang quản lý.
+ Cho biết số lượng căn hộ còn trống, số lượng căn hộ đang thuê ứng với từng loại căn hộ 
+ Tính tổng tiền thuê phòng của công ty trong tháng ( tổng tiền thuê phòng của các căn hộ đang thuê )
