# Rancang Bangun Alat Pendeteksi Kebisingan Berbasis Sensor untuk Analisis Lingkungan Suara

![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/350eb0ba-c08e-4825-985c-01733abdec70)

Proyek ini bertujuan untuk mengembangkan alat pendeteksi kebisingan berbasis sensor yang dapat menganalisis lingkungan suara secara efektif. Alat ini menggunakan sensor suara KY-037 untuk mendeteksi kebisingan di sekitarnya dan memberikan peringatan berbasis audio ketika kebisingan melebihi ambang batas yang telah ditentukan. Data yang dikumpulkan oleh sensor suara ini akan diolah oleh mikrokontroler Arduino Uno, yang kemudian menghasilkan output berupa suara peringatan melalui buzzer. Implementasi alat ini sangat relevan untuk lingkungan yang membutuhkan suasana tenang dan hening, seperti perpustakaan, ruang belajar, atau ruang kerja. Alat pendeteksi kebisingan ini dirancang untuk ditempatkan pada setiap sudut ruangan atau kelompok meja, sehingga dapat mencakup seluruh area dan memastikan bahwa semua sisi lingkungan terpantau dengan baik. Proyek ini merupakan bagian dari mata kuliah workshop mikrokontroler yang dikerjakan oleh mahasiswa jurusan Teknik Elektronika dari Politeknik Elektronika Negeri Surabaya (PENS). Melalui proyek ini, mahasiswa tidak hanya belajar mengenai aplikasi praktis dari mikrokontroler dan sensor, tetapi juga mengembangkan keterampilan dalam merancang dan mengimplementasikan solusi teknis untuk masalah nyata di lingkungan sekitar. Dengan demikian, alat ini tidak hanya menjadi proyek akademik, tetapi juga sebuah kontribusi nyata untuk menciptakan lingkungan yang lebih nyaman dan produktif.

## Desain 3D
 
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/85a7ba89-321d-4ff1-a367-43d0feff3b33)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/3f1941e4-73e7-47b8-a253-5c22787e46cd)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/ec05c7ae-f840-4222-9692-bf013c5a8df7)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/3da72351-e29d-472a-8b1f-c3a4b2bfbd89)

Desain 3D di atas merupakan gambaran akhir alat yang mencakup ukuran, posisi komponen, dan file perangkat lunak untuk pencetakan 3D. Desain ini dibuat menggunakan perangkat lunak Fusion 360 karena kemudahan penggunaannya dan kemampuan desainer dalam mengoperasikan perangkat lunak tersebut. Fusion 360 memudahkan penentuan posisi komponen dengan presisi tinggi dan menawarkan fitur simulasi serta analisis struktural, yang memastikan bahwa alat dirancang sesuai dengan spesifikasi teknis yang telah ditentukan. Perangkat lunak ini juga memungkinkan desainer untuk mengevaluasi kekuatan dan daya tahan alat sebelum proses pencetakan dilakukan, sehingga dapat meminimalkan risiko kesalahan dan memastikan hasil akhir yang berkualitas. Dengan Fusion 360, desainer dapat dengan mudah mengoptimalkan tata letak komponen dan memastikan bahwa setiap bagian dari alat sesuai dengan rancangan awal. Pemilihan Fusion 360 didasarkan pada efisiensi perangkat lunak ini dalam menangani tugas-tugas kompleks dan kemampuan desainer yang sudah mahir dalam penggunaannya, sehingga keseluruhan proses desain menjadi lebih cepat dan akurat. Hasil akhir dari desain ini kemudian dapat diekspor dalam format yang kompatibel dengan berbagai jenis printer 3D, memastikan bahwa proses pencetakan dapat dilakukan dengan mudah dan cepat. Dengan demikian, penggunaan Fusion 360 tidak hanya memastikan bahwa desain 3D alat ini akurat dan optimal, tetapi juga mendukung kelancaran proses produksi selanjutnya.
  
Link desain 3D (bagian dalam) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Desain/bagian%20dalam.step">File desain 3D (bagian dalam)</a>  
Link desain 3D (bagian luar) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Desain/bagian%20luar.step">File desain 3D (bagian luar)</a>  
Link video tutorial desain 3D ==> <a href="https://youtu.be/MYmIewiCJK0?si=Z88mito5nbMwKOmb">Video desain 3D</a>  

---
## List Komponen
1. Hardware  
   a. Arduino UNO  
   b. Sensor suara KY-037  
   c. Speaker subwoofer   
   d. LCD 16x2 + i2C  
   e. LED 5mm  
   f. GF1002-PAM8403 Stereo Audio Amplifier Module
   
3. Software  
   a. Arduino ide  
   b. HxD
   d. Audacity  
   e. Inventor  
   f. Eagle  
   g. Visual Studio Code (VSC) 
   
5. Alat  
   a. Solder  
   b. Timah solder  
   c. Kabel jumper  
   d. Breadboard  
   e. Obeng  
---
## Blok Diagram  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/044f7e2e-e520-40c2-83e1-b7b0f8205fd9)  
Berikut adalah cara kerja sistem dari alat pendeteksi kebisingan :
1. ...
2. ...
3. ...

---
## Rangkaian Simulasi  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/85ca22a6-ed74-4b18-a4ad-6116f521a506)  
  
Simulasi merupakan tahapan penting dalam uji coba sistem, yang bertujuan untuk memastikan bahwa semua komponen berfungsi dengan baik sebelum implementasi nyata. Untuk proyek alat pendeteksi kebisingan ini, kami menggunakan platform web Tinkercad. Pemilihan platform ini didasarkan pada kemudahannya diakses serta ketersediaan secara gratis, sehingga kalian semua dapat mencoba mensimulasikan sendiri tanpa biaya tambahan. Dalam simulasi ini, kami menggunakan rangkaian dengan garis besar saja, karena sensor suara yang kami butuhkan tidak tersedia di simulator. Sebagai gantinya, input pada rangkaian menggunakan tombol tekan untuk mensimulasikan deteksi kebisingan. Untuk output, kami menggunakan buzzer sebagai indikator suara, yang akan berbunyi ketika kebisingan terdeteksi, serta LCD yang menandakan status aktif atau tidaknya rangkaian. Tinkercad memungkinkan kami untuk membuat dan menguji desain rangkaian dengan cara yang sederhana dan efektif, meskipun tidak memiliki semua komponen yang diinginkan. Platform ini juga menyediakan alat-alat simulasi yang memadai untuk memvisualisasikan bagaimana rangkaian akan berfungsi dalam kondisi nyata, membantu kami mengidentifikasi dan memperbaiki masalah sebelum melangkah ke tahap produksi fisik. Dengan menggunakan Tinkercad, kami dapat menghemat waktu dan biaya sambil tetap memastikan bahwa desain kami bekerja sesuai dengan spesifikasi yang diinginkan.  
  
Link web simulasi ==> <a href="https://www.tinkercad.com/things/jV3vWOUGUW2-simulasi/editel">Simulasi software</a>  
Link video simulasi ==> <a href="https://youtu.be/cqOJ23cZhoI?si=dtuSKsLPAU53A1Sa">Video simulasi software</a>  

---
## Rangkaian Skematik
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/c88580ec-2b27-44fd-a577-7934d52eb0f1)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/8d4a1f71-460a-4c50-ac2c-bce17f3a6d7a)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/1ba611ad-98a0-4d11-b012-2c81b5424951)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/6534751c-41b9-42c2-aa92-39730f7b03ba)  

Perangkaian skematik pada proyek ini merupakan tahap desain yang nantinya digunakan untuk mencetak PCB. Desain skematik ini dibuat menggunakan perangkat lunak Eagle karena kemudahan penggunaannya dan desainer lebih menguasai perangkat lunak ini. Selain itu, dalam perkuliahan, pembuat lebih sering menggunakan perangkat lunak tersebut, sehingga sudah terbiasa dengan fitur-fitur yang disediakan. Eagle memungkinkan perancangan skematik dengan presisi tinggi dan memudahkan proses routing jalur pada PCB. Dengan antarmuka yang intuitif dan berbagai alat bantu desain, perangkat lunak ini membantu memastikan bahwa semua komponen terhubung dengan benar dan layout PCB dioptimalkan untuk kinerja terbaik. Pemilihan Eagle didasarkan pada pengalaman dan keahlian desainer, yang memastikan bahwa skematik yang dihasilkan akurat dan sesuai dengan kebutuhan proyek. Hasil akhir dari desain skematik ini kemudian diekspor untuk proses pencetakan PCB, memastikan semua jalur dan koneksi sesuai dengan spesifikasi yang telah ditentukan. Dengan menggunakan Eagle, kami dapat menghasilkan desain yang efisien, akurat, dan siap untuk tahap produksi selanjutnya.

Link skematik ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Schematik/Alat%20pendeteksi%20kebisingan.sch">File skematik</a>  
Link board ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Schematik/Alat%20pendeteksi%20kebisingan.brd">File board</a>  
Link video tutorial skematik ==> <a href="https://youtu.be/qFakJmJQMaU?feature=shared">Video skematik</a>  

---
## Sistem Audio
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/31788840-6017-4436-a93f-9abfd1e0c013)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/fb3e670c-983c-4cfe-8e1b-df53758e2d61)

Pembuatan audio pada proyek ini merupakan tahap penting yang nantinya digunakan sebagai output peringatan yang dikeluarkan melalui speaker. Proses pembuatan audio ini menggunakan dua perangkat lunak, yaitu Audacity dan HxD, masing-masing dengan fungsinya yang spesifik dan saling melengkapi. Audacity berfungsi sebagai perekam audio sekaligus alat untuk melakukan editing, yang bertujuan untuk mengurangi kebisingan agar suara yang dihasilkan lebih jernih dan jelas. Dengan Audacity, kami dapat merekam suara peringatan yang berkualitas tinggi dan melakukan berbagai pengeditan, seperti pemotongan, penyesuaian volume, dan penerapan filter untuk memastikan kualitas audio yang optimal. Setelah proses perekaman dan editing selesai, file audio tersebut kemudian diproses menggunakan HxD. HxD adalah perangkat lunak yang digunakan untuk mengonversi file audio menjadi kode biner atau format lain yang dapat diinput ke dalam program utama alat. Konversi ini penting agar audio dapat diintegrasikan dengan sistem perangkat keras dan lunak alat pendeteksi kebisingan. Dengan menggunakan kombinasi Audacity dan HxD, kami dapat memastikan bahwa audio peringatan yang dihasilkan tidak hanya berkualitas tinggi tetapi juga kompatibel dengan program utama, sehingga alat dapat berfungsi dengan efektif dan memberikan peringatan yang jelas saat mendeteksi kebisingan. Pemilihan kedua perangkat lunak ini didasarkan pada kemampuannya untuk menghasilkan audio berkualitas tinggi dan kemudahan dalam mengonversi serta mengintegrasikan audio ke dalam sistem alat.

Link audio (Audacity) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Program/AUDIO%20rekam">File auido</a>  
Link audio (HxD) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Program/AUDIO%20rekam.raw">File auido</a>  
Link video tutorial audio ==> <a href="https://youtu.be/W0XZ7WrG6vU">Video audio</a>  

---
## Proses Pengerjaan

---
## Dokumentasi






