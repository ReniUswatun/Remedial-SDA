# Find the first repeating element in an array
Tugas ini merupakan tugas remedial kuis oleh dosen saya yaitu pak ardhi. 
<br/>
## Daftar Isi
[1. Contoh soal](#1-contoh-soal)<br/>
[2. Pseudocode pada Program](#2-pseudocode-pada-program)<br/>
[3. Langkah-langkah (penjelasan) pada Program](#3-langkah-langkah-penjelasan-pada-program)<br/>
[4. Video Penjelasan](#4-video-penjelasan)<br/>

Diberikan array bilangan bulat. Lalu, buat program dalam bahasa C agar dapat menemukan indeks elemen berulang pertama didalam array.
## 1. Contoh Soal
![Examples](https://res.cloudinary.com/dwmyo7pz2/image/upload/v1686407016/Screenshot_2023-06-10_212212_m1fnpg.png)
<br/>

## 2. Pseudocode pada Program
Pada soal di atas maka pseudocodenya dapat seperti di bawah ini.

```powershell
    Declare arrGlobal[]= {6, 10, 5, 4, 9, 120, 4, 6, 10}
Procedure FindRepeatingHashing(arr[], size):
    Declare hashing[size]
    Declare min = -1
    Declare indeks = size
    
    For i = 0 to size-1:
        indeks = indeks - 1
        hashing[i] = arr[indeks]
        
        For j = indeks-1 to 0:
            If hashing[i] = arr[j] and (min = -1 or j < min):
                Set min = j
                
    Return min

Procedure main():
    Declare temp = size of arrGlobal / size of arrGlobal[0]
    Declare repeatIndex = FindRepeatingHashing(arrGlobal, temp)
    
    If repeatIndex = -1:
        Print "There are no repeat elements"
    Else:
        Print "The first repeating element is : ", arrGlobal[repeatIndex]

End Procedure
```

Fungsi FindRepeatinHashing disini berfungsi untuk mencari indeks yang sama dan yang paling kecil. 

## 3. Langkah-langkah (penjelasan) pada Program
#### 1. Membuat Global Array
Array dibuat global dimaksudkan agar ketika mengganti array dapat dilakukan di sutu tempat, yaitu di arrGlobal.
#### 2. Membuat int temp berisi banyak array di main
Temp ini berisi banyak array yang berada di arrGlobal, sehingga tidak perlu mendefine banyak array yang dibutuhkan, sudah otomatis tercari banyak arraynya.
#### 3. Membuat int repeatIndex
repeatIndex ini berfungsi sebagai tempat dari hasil pemanggilan fungsi **FindRepeatingHashing**. Int ini digunakan untuk melihat apakah ada perulangan atau tidak? jika tidak kembalikan -1. Jika iya akan mengembalikan nilai indeks array pada perulangan yang paling terkecil. Pada pemanggilan ini dimasukkan parameter berupa Global array dan size pada global array.
#### 4. Fungsi FindRepeatingHashing
- Mendeklarasi array Hashing sebanyak size.
- Mendeklarasi min = -1
- Mendeklarasi index menjadi size
#### 5. For loop  pertama di FindRepeatingHashing
For loop ini digunakan untuk memasukkan arr terakhir kedalam hashing pertama **(dibalik)**. Dengan indeks berkurang setiap menjalankan for loop ini.
#### 6. For loop  kedua di FindRepeatingHashing
For loop ini digunakan untuk mengecek hashing (atau bisa juga arr terkhir) apakah terdapat data yang sama?. Jika iya lalu di cek kembali apakah panjang array yang sama tersebut paling sedikit?. Jika iya maka ganti min menjadi panjang array yang sedikit itu.
![penjelasan](https://res.cloudinary.com/dwmyo7pz2/image/upload/v1686414495/Screenshot_2023-06-10_232639_ctslcg.png)

Setelah itu return min yang akan dimasukkan kedalam repeatIndex. 
## 4. Video Penjelasan
[![Watch the video](https://res.cloudinary.com/dwmyo7pz2/image/upload/v1686415109/Screenshot_2023-06-10_233733_rume9c.png)](https://youtu.be/B6ni_8WH9Jk)
Terimakasih....




