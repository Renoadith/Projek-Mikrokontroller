# Rancang Bangun Alat Pendeteksi Kebisingan Berbasis Sensor untuk Analisis Lingkungan Suara

https://github.com/Renoadith/Projek-Mikrokontroller/assets/134272498/db399abb-6886-4fe6-a7e3-d1a75f257232

![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/350eb0ba-c08e-4825-985c-01733abdec70)  
  
Proyek ini bertujuan mengembangkan alat pendeteksi kebisingan berbasis sensor untuk menganalisis lingkungan suara secara efektif. Menggunakan sensor suara KY-037, alat ini mendeteksi kebisingan dan memberikan peringatan audio ketika kebisingan melebihi ambang batas yang ditentukan. Data dari sensor diolah oleh mikrokontroler Arduino Uno, yang menghasilkan output berupa suara peringatan melalui buzzer. Alat ini cocok untuk lingkungan yang memerlukan ketenangan, seperti perpustakaan, ruang belajar, atau ruang kerja, dan dirancang untuk ditempatkan di setiap sudut ruangan atau kelompok meja agar dapat memantau seluruh area. Proyek ini merupakan bagian dari mata kuliah workshop mikrokontroler yang dikerjakan oleh mahasiswa Teknik Elektronika Politeknik Elektronika Negeri Surabaya (PENS), yang mengaplikasikan pengetahuan praktis dalam mikrokontroler dan sensor untuk menciptakan solusi teknis nyata, menjadikan lingkungan lebih nyaman dan produktif.
  
## Desain 3D
 
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/85a7ba89-321d-4ff1-a367-43d0feff3b33)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/3f1941e4-73e7-47b8-a253-5c22787e46cd)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/ec05c7ae-f840-4222-9692-bf013c5a8df7)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168979944/3da72351-e29d-472a-8b1f-c3a4b2bfbd89)
  
Desain 3D di atas merupakan gambaran akhir alat yang mencakup ukuran, posisi komponen, dan file perangkat lunak untuk pencetakan 3D. Desain ini dibuat menggunakan Fusion 360 karena kemudahan penggunaan dan kemampuan desainer. Fusion 360 memudahkan penentuan posisi komponen dengan presisi tinggi dan menawarkan fitur simulasi serta analisis struktural, memastikan alat sesuai spesifikasi teknis. Perangkat lunak ini juga memungkinkan evaluasi kekuatan dan daya tahan alat sebelum pencetakan, mengurangi risiko kesalahan dan memastikan kualitas. Dengan Fusion 360, desainer dapat mengoptimalkan tata letak komponen sesuai rancangan awal. Pemilihan Fusion 360 didasarkan pada efisiensi dan kemampuan desainer, membuat proses desain lebih cepat dan akurat. Desain akhir diekspor dalam format kompatibel dengan berbagai printer 3D, memastikan pencetakan mudah dan cepat. Penggunaan Fusion 360 memastikan desain 3D alat ini akurat, optimal, dan mendukung kelancaran proses produksi.
  
Link desain 3D (bagian dalam) ==> <a href="">File desain 3D (bagian dalam)</a>  
Link desain 3D (bagian luar) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Desain/3d%20desain.stl">File desain 3D (bagian luar)</a>  
Link video tutorial desain 3D ==> <a href="https://youtu.be/MYmIewiCJK0?si=Z88mito5nbMwKOmb">Video desain 3D</a>  

---
## List Komponen  

![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/2cf26869-1e96-484c-ab06-c0d4fe477a21)  
  
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
  
Simulasi adalah tahap penting dalam uji coba sistem untuk memastikan semua komponen berfungsi baik sebelum implementasi nyata. Untuk proyek alat pendeteksi kebisingan ini, kami menggunakan platform web Tinkercad karena kemudahannya diakses dan gratis, memungkinkan kalian mencoba simulasi tanpa biaya. Kami menggunakan rangkaian garis besar, dengan tombol tekan sebagai input untuk menggantikan sensor suara yang tidak tersedia di simulator. Output berupa buzzer sebagai indikator suara dan LCD untuk menandakan status aktif atau tidaknya rangkaian. Tinkercad memudahkan pembuatan dan pengujian desain rangkaian secara efektif, meskipun tidak memiliki semua komponen yang diinginkan. Platform ini menyediakan alat simulasi memadai untuk memvisualisasikan fungsi rangkaian dalam kondisi nyata, membantu mengidentifikasi dan memperbaiki masalah sebelum produksi fisik. Dengan Tinkercad, kami menghemat waktu dan biaya sambil memastikan desain sesuai spesifikasi.  
  
Link web simulasi ==> <a href="https://www.tinkercad.com/things/jV3vWOUGUW2-simulasi/editel">Simulasi software</a>  
Link video simulasi ==> <a href="https://youtu.be/cqOJ23cZhoI?si=dtuSKsLPAU53A1Sa">Video simulasi software</a>  

---
## Rangkaian Skematik
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/c88580ec-2b27-44fd-a577-7934d52eb0f1)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/8d4a1f71-460a-4c50-ac2c-bce17f3a6d7a)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/1ba611ad-98a0-4d11-b012-2c81b5424951)  
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/6534751c-41b9-42c2-aa92-39730f7b03ba)  
  
Perangkaian skematik pada proyek ini adalah tahap desain untuk mencetak PCB, dibuat menggunakan perangkat lunak Eagle. Pemilihan Eagle didasarkan pada kemudahan penggunaan dan keahlian desainer, serta kebiasaan penggunaan dalam perkuliahan. Eagle memungkinkan perancangan skematik dengan presisi tinggi dan memudahkan proses routing jalur PCB. Dengan antarmuka intuitif dan berbagai alat bantu desain, perangkat lunak ini memastikan semua komponen terhubung dengan benar dan layout PCB dioptimalkan untuk kinerja terbaik. Desain skematik yang dihasilkan kemudian diekspor untuk pencetakan PCB, memastikan semua jalur dan koneksi sesuai spesifikasi. Dengan Eagle, kami dapat menghasilkan desain yang efisien, akurat, dan siap untuk tahap produksi.
  
Link skematik ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Schematik/Alat%20pendeteksi%20kebisingan.sch">File skematik</a>  
Link board ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Schematik/Alat%20pendeteksi%20kebisingan.brd">File board</a>  
Link video tutorial skematik ==> <a href="https://youtu.be/qFakJmJQMaU?feature=shared">Video skematik</a>  

---
## Sistem Audio
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/31788840-6017-4436-a93f-9abfd1e0c013)
![image](https://github.com/Renoadith/Projek-Mikrokontroller/assets/168974067/fb3e670c-983c-4cfe-8e1b-df53758e2d61)
  
Perangkaian skematik pada proyek ini dirancang untuk mencetak PCB menggunakan perangkat lunak Eagle. Eagle dipilih karena kemudahan penggunaan dan keahlian desainer dalam perangkat lunak ini. Perangkat lunak ini memungkinkan perancangan skematik dengan presisi tinggi dan memudahkan routing jalur PCB. Desain yang dihasilkan memastikan semua komponen terhubung dengan benar dan layout PCB dioptimalkan. Hasil desain kemudian diekspor untuk pencetakan PCB, memastikan jalur dan koneksi sesuai spesifikasi. Dengan Eagle, desain yang efisien dan akurat siap untuk tahap produksi.
  
Link audio (Audacity) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Program/AUDIO%20rekam">File auido</a>  
Link audio (HxD) ==> <a href="https://github.com/Renoadith/Projek-Mikrokontroller/blob/main/Program/AUDIO%20rekam.raw">File auido</a>  
Link video tutorial audio ==> <a href="https://youtu.be/W0XZ7WrG6vU">Video audio</a>  

---
## Proses Pengerjaan  
Berikut adalah prosesdur pengerjaan dari proyek alat pendeteksi kebisingan :  
#### 1.  Simulasi Perangkat Lunak:  
Melakukan simulasi rangkaian menggunakan Tinkercad untuk memastikan semua komponen berfungsi dengan baik sebelum implementasi nyata.  

  
#### 2. Pembuatan Desain 3D:  
Menggunakan Fusion 360 untuk membuat desain 3D alat, mencakup ukuran, posisi komponen, dan file perangkat lunak untuk pencetakan 3D.  

  
#### 3. Perancangan Skematik PCB:  
Membuat desain skematik PCB menggunakan perangkat lunak Eagle, memastikan semua komponen terhubung dengan benar dan jalur dioptimalkan.  

  
#### 4. Pencetakan PCB:  
Mengekspor desain skematik untuk pencetakan PCB, memastikan semua jalur dan koneksi sesuai dengan spesifikasi.  

  
#### 5. Pengumpulan Semua Komponen:  
Mengumpulkan semua komponen elektronik yang diperlukan berdasarkan desain skematik yang telah dibuat.  

  
#### 6. Soldering Komponen:  
Melakukan penyolderan komponen pada PCB yang telah dicetak sesuai dengan desain skematik.  

  
#### 7. Rekaman dan Pengeditan Audio:  
Merekam dan mengedit audio menggunakan Audacity dan HxD untuk membuat peringatan berbasis audio yang akan digunakan oleh alat.  

  
#### 8.Uji Coba Alat:  
Menguji alat secara menyeluruh untuk memastikan semua komponen bekerja sesuai rencana dan alat berfungsi dengan baik dalam mendeteksi kebisingan.  

  
#### 9. Evaluasi dan Finishing:  
Mengevaluasi kinerja alat, melakukan penyesuaian dan perbaikan jika diperlukan, dan menyelesaikan tahap akhir pengembangan alat.  

  
#### 10. Demonstrasi Alat:  
Melakukan demonstrasi alat kepada pihak terkait, menunjukkan fungsionalitas dan efektivitas alat pendeteksi kebisingan.  

  
**Dengan mengikuti prosedur ini, proyek dapat diselesaikan secara sistematis dan efisien, memastikan setiap tahap dilakukan dengan cermat dan hasil akhirnya berkualitas tinggi.**

---

## Dokumentasi






