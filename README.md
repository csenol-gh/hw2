# hw2

Konu: C, Unix/Linux, Memory management, Pthreads

Görev: Memory management simülasyonu yapmak istiyoruz. Bunun için bir adet server program
(Scheduler) ve bir adet de istemci (User process) programı yazmanız gerekecektir. Scheduler tek
instance olarak çalışacak, User process ise birden fazla instance a sahip olabilecektir.

Scheduler: En başta main memory yi temsilen 512KB lık bir hafıza ayıracaktır. Frame boyu 512Byte
olacaktır. Böylelikle main memory 1000 tane frame den oluşacaktır. Bu frame ler daha sonra User
process lerin pagelerine atanacaktır. Scheduler process interaktif olmayacaktır.

User process (İstemci): User process çalışmaya başladığında bir text dosyayı girdi olarak alacaktır. Bu
dosya sanki kendi executable image ini içeriyormuş gibi düşünülecektir. Böylelikle bahsi geçen dosya
her biri 512Byte olan page lere ayrılacaktır. Dosya büyüklüğü process in page tablosunun büyüklüğünü
de belirleyecektir. Örneğin girdi olarak alınan a.txt dosyası 32KB büyüklüğünde olsun. Bu durumda bu
user process sanki her biri 512Byte uzunluğuna sahip 64 tane (page table size) page içerecektir. User
process interaktif olacaktır ve sonsuz döngüde çalışacaktır. Program komut satırından çalıştığında iki
parametre alacaktır, ilki Process name, ikincisi bahsi geçen text dosyası (örnekteki a.txt) adı.
Beklenen çalışma biçimi: User process çalışır çalışmaz kendi Process name ini ve text dosya içeriğini
Scheduler a gönderecektir. Böylelikle, Scheduler adı geçen User process için bir page table oluşturup,
memory (frame) allocation yapacaktır. User process bu işlemden sonra text dosyayı unutacaktır (dosya
kapama). Ardından döngü içinde ulaşılmak istenen page no sorulacaktır. Bu page no scheduler a
iletilecek ve Scheduler page tablosunu kullanarak ilgili page içerğini (en fazla 512 Byte) istemci process
e gönderecektir. Hem Scheduler hem de istemci belirtilen sayfa içeriğini standart çıktısına
yazdıracaktır. Eğer olmayan bir page numarası istenirse, istemci process sonlandırılacak (memory
protection) ve ona atanmış olan frame ler geri alınacaktır. Eğer bir şekilde sistemde yeterli sayıda boş
frame kalmamışsa, çalışması istenen process sisteme dahil edilmeden sonlanacaktır (long-term
scheduler kuralı). Sistemde virtual memory management yoktur. İstemciyi sonlandırmak için Page
numarası olarak olmayan bir sayfa (örneğin -1) girilebilir.

Test: Test ederken her bir istemci için ayrı bir terminal açıp oradan çalıştırmanız çıktıların takibi
açısından kolay olacaktır. Scheduler ın her bir isteği kendi çıktısına yazması test kolaylığı açısından
tercih edilmelidir. Örneğin, (i) Ali isimli istemci, a.txt içeriği ve 64 lük page table ile sisteme alındı, (ii)
Ali isimli istemciden gelen 68 numaralı sayfaya erişim istemi reddedildi, process sonlandırılıp kaynakları
geri alındı, (iii) Veli isimli, b.txt dosyası içeriğine sahip 246 page lik istemci yeterli frame olmadığı için
sisteme alınmadı.

Gönderim: İki adet C dosyası (Scheduler ve User process) göndermeniz gerekmektedir. İkili gruplar
olarak çalışabilirsiniz. Yalnız bu durumda grup adına grup üyelerinden yalnız birisi gönderim yapmalıdır.
Gönderimler https://uzak.etu.edu.tr ye dosya yükleme şeklinde olacaktır. Email gönderimleri kabul
edilmemektedir.
