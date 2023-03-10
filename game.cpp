#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <cstdlib>
using namespace std;

int Q_NO = 1;
int CORRECT = 0;
int WRONG = 0;
string name;
string username,usernamefile ;

bool ask[100] ;

void display_random_question();
void display();
void question(string question, string a, string b, string c, string d, char correct_answer);
void result();

int main()
{
    {
       string  choice ;
    cout << "||      ||  ||||||||||  ||          ||            ||||||           ||  ||\n" ;
    cout << "||      ||  ||          ||          ||          ||      ||       ||  ||  ||\n" ;
    cout << "||||||||||  ||||||||||  ||          ||          ||      ||       ||      ||\n" ;
    cout << "||      ||  ||          ||          ||          ||      ||         ||  ||\n" ;
    cout << "||      ||  ||||||||||  ||||||||||  ||||||||||    ||||||             || \n" ;
    cout << "Choose 1 to register\n" ;
    cout << "Choose 2 to login\n " ;
    cin >> choice ;
    cin.ignore() ;
    if (choice == "1" )
    {
        cout << "Please Enter Your Username : " ;
        cin >> username ; 
        usernamefile ="C:\\Users\\boss\\Com_prog_project\\Usernameinfo\\"+username+".txt" ;
        ofstream saveusername ;
        saveusername.open(usernamefile) ;
        saveusername <<username << endl ;
        saveusername.close() ;
        saveusername.open("C:\\Users\\boss\\Com_prog_project\\MaxscoreFile\\"+username+".txt", ios_base::out);
        saveusername << "0" << endl ;
        cout << "Register SuccessFul" ;
        saveusername.close() ;
    }
    else if (choice == "2" )
    {
        cout << "Please Enter Your Username : " ;
        getline (cin,username) ; 
        usernamefile ="C:\\Users\\boss\\Com_prog_project\\Usernameinfo\\"+username+".txt" ;
        ifstream pullusername ;
        pullusername.open(usernamefile) ;
        string textline ;
        if (getline(pullusername,textline))
        {
        cout <<"Login Successful !!\n " ;       
        }else
        {
            cout <<"Failed to Login\n" ;
               main() ;
        }
 
        pullusername.close() ;
    }else 
    {
        cout << "Wrong Input \n" ;
        main() ;
    }
    }
    
    for(int i = 0 ; i< 100 ; i++)  ask[i] = "true" ;

    display();
    return 0;
  
  
}

void display()
{
    cout << "______________________________________________" ;
    system("cls");
    cout << "USERNAME : "<<username<<endl;
    cout << "Question NO:" << Q_NO <<"\t\tCorrect Answers:"<< CORRECT <<"\t\tWrong Answers:" << WRONG <<endl<<endl;
    display_random_question();

}


void display_random_question()
{
    srand(time(0));
    bool is_question_remaining = false;
    for(int i=0; i<100; i++)
    {
        if(ask[i])
        {
            is_question_remaining = true ;
            break;
        }
    }
    while(is_question_remaining)
    {
        int no = rand()%100;
        if(ask[no])
        {
            ask[no] = false;
            switch (no)
            {
            case 0:
                question("ความหมายของ business section(n.) คือ" , "ธุรกิจ"
                        , "การศึกษาธุรกิจ" , "เนื้อหาส่วนที่เกี่ยวกับธุรกิจ" , "การส่งต่อธุรกิจ" , 'c');
                break;
            case 1:
                question("ความหมายของ current affairs(n.) คือ" , "เหตุการณ์ปัจจุบัน" , "กิจการปัจจุบัน" , "ความสำคัญ" , "กิจการ" , 'a');
                break;
            case 2:
                question("ความหมายของ entertainment(n.) คือ" , "วิจารณ์"
                        , "ควบคุม" , "การติดต่อ" , "ความบันเทิง" , 'd');
                break;
            case 3:
                question("ความหมายของ features(n.) คือ" , "ชนเผ่า" , "ส่วนประกอบ" , "การคุกคาม" , "การเอาเปรียบ" , 'b');
                break;
            case 4:
                question("ความหมายของ feature (v.) คือ" , "โรคหัด"
                        , "แสดง" , "องค์กรสื่อ" , "ถกเถียง" , 'b');
                break;
            case 5:
                question("ความหมายของ national news (n.) คือ" , "ชนเผ่า" , "ชนบท" , "การเมืองและสังคม" , "ข่าวในประเทศ" , 'd');
                break;
            case 6:
                question("ความหมายของ politics and society (n.) คือ" , "การเมืองและสังคม"
                        , "การติดต่อ" , "คนแสดงความเห็น" , "สังคมออนไลน์" , 'a');
                break;
            case 7:
                question("ความหมายของ uncontacted (adj.) คือ" , "การสื่อสาร" , "การติดต่อ" , "ที่ไม่ยุ่งเกี่ยวกับภายนอก" , "ไม่ได้รับการติดต่อ" , 'c');
                break;
            case 8:
                question("ความหมายของ contact (n.) คือ" , "มีหนทางติดต่อ"
                        , "ต้องการติดต่อ" , "การติดต่อ" , "ขาดการติดต่อ" , 'c');
                break;
            case 9:
                question("ความหมายของ tribe (n.) คือ" , "ชนเผ่า" , "ชาวเกาะ" , "ผู้ลี้ภัย" , "การย้ายข้ามแดน" , 'a');
                break;
            case 10:
                question("ความหมายของ publish (v.) คือ" , "แพร่กระจายอย่างรวดเร็ว"
                        , "องค์กรสื่อ" , "เผยแพร่" , "การคุกคาม" , 'c');
                break;
            case 11:
                question("ความหมายของ threat (n.) คือ" , "การก่อการร้าย" , "อันตราย" , "ขยะ" , "ความลำบาก" , 'b');
                break;
            case 12:
                question("ความหมายของ exploitation (n.) คือ" , "การทำงาน"
                        , "เหตุการณ์" , "เข้าร่วม" , "การเอาเปรียบ" , 'd');
                break;
            case 13:
                question("ความหมายของ go viral (v.) คือ" , "เป็นที่นิยม" , "การแชร์และแพร่กระจายอย่างรวดเร็ว" , "เป็นที่รู้จัก" , "การตีพิมพ์" , 'b');
                break;
            case 14:
                question("ความหมายของ commentator (n.) คือ" , "ความคิดเห็น"
                        , "คนแสดงความเห็น" , "ผู้ฟัง" , "การแสดงความคิดเห็น" , 'b');
                break;
            case 15:
                question("ความหมายของ controversial (adj.) คือ" , "ประเด็น" , "ถกเถียง" , "แสดงความคิดเห็น" , "เกี่ยวกับการโต้เถียง" , 'd');
                break;
            case 16:
                question("ความหมายของ isolated (adj.) คือ" , "โดดเดี่ยว"
                        , "แยก" , "โรคภัย" , "ดูแล" , 'a');
                break;
            case 17:
                question("ความหมายของ organize (v.) คือ" , "ผู้ควบคุม" , "การค้นหา" , "จัดการ" , "ความพยายาม" , 'c');
                break;
            case 18:
                question("ความหมายของ attempt (n.) คือ" , "การยอมแพ้"
                        , "ความเชื่อ" , "ความพยายาม" , "ความสำเร็จ" , 'c');
                break;
            case 19:
                question("ความหมายของ disease (n.) คือ" , "ทะเลทราย" , "โรคภัย" , "ฤดู" , "ภัยแล้ง" , 'b');
                break;
            case 20:
                question("ความหมายของ viable (adj.) คือ" , "ความพยายาม"
                        , "เสร็จสิ้น" , "ทำให้สำเร็จ" , "ซึ่งประสบความสำเร็จ" , 'd');
                break;
            case 21:
                question("ความหมายของ monitor (v.) คือ" , "ควบคุม" , "ตรวจสอบ" , "การถูกควบคุม" , "ผู้ตรวจสอบ" , 'a');
                break;
            case 22:
                question("ความหมายของ satellite image (n.) คือ" , "ภาพถ่ายภูมิประเทศ"
                        , "ภาพถ่ายทางดาวเทียม" , "ภาพถ่ายจากอวกาศ" , "ภาพถ่าย" , 'b');
                break;
            case 23:
                question("ความหมายของ measles (n.) คือ" , "ไข้มาลาเรีย" , "โรคกระเพาะ" , "โรคหัด" , "วัณโรค" , 'c');
                break;
            case 24:
                question("ความหมายของ malaria (n.) คือ" , "ประเทศมาเลเซีย"
                        , "ไข้หวัด" , "คนมาเลเซีย" , "ไข้มาลาเรีย" , 'd');
                break;
            case 25:
                question("ความหมายของ useful (adj.) คือ" , "พร้อมใช้งาน" , "ใช้จนหมด" , "ที่มีประโยชน์" , "เตรียมใช้งาน" , 'c');
                break;
            case 26:
                question("ความหมายของ blog (n.) คือ" , "กล่อง"
                        , "บล็อค" , "ขนย้าย" , "การสับเปลี่ยน" , 'b');
                break;
            case 27:
                question("ความหมายของ search engine (n.) คือ" , "การค้นพบ" , "เครื่องมือ" , "โปรแกรมค้นหา" , "การค้นหา" , 'c');
                break;
            case 28:
                question("ความหมายของ social media (n.) คือ" , "สังคมออนไลน์"
                        , "การติดต่อ" , "การสื่อสาร" , "การส่งข้อความ" , 'a');
                break;
            case 29:
                question("ความหมายของ instant messaging (n.) คือ" , "การสื่อสาร" , "การพิมพ์" , "การส่งข้อความแบบเรียลไทม์" , "การค้นหา" , 'c');
                break;
            case 30:
                question("ความหมายของ video messaging (n.) คือ" , "การถ่ายวิดีโอ"
                        , "ข้อความวิดิโอ" , "การโทร" , "การส่งข้อความ" , 'b');
                break;
            case 31:
                question("ความหมายของ internet access (n.) คือ" , "การใช้อินเตอร์เน็ต" , "พื้นที่ไร้อินเตอร์เน็ต" , "การติดตั้งอินเตอร์เน็ต" , "การเข้าถึงอินเตอร์เน็ต" , 'd');
                break;
            case 32:
                question("ความหมายของ digital divide (n.) คือ" , "ยุคดิจิตอล"
                        , "สื่อดิจิตอล" , "ความเหลื่อมล้ำทางดิจิตอล" , "การใช้งานสื่อดิจิตอล" , 'c');
                break;
            case 33:
                question("ความหมายของ media organization (n.) คือ" , "กาแชร์สื่อออนไลน์" , "การออกสื่อ" , "องค์กรสื่อ" , "องค์กร" , 'c');
                break;
            case 34:
                question("ความหมายของ community journalism (n.) คือ" , "พิ้นที่"
                        , "การชุมนุม" , "ประเทศ" , "พลเมือง" , 'd');
                break;
            case 35:
                question("ความหมายของ affordable technology (n.) คือ" , "เทคโนโลยีราคาย่อมเยา" , "การใช้เทคโนโลยี" , "การสร้างเทคโนโลยี" , "โทษของเทคโนโลยี" , 'a');
                break;
            case 36:
                question("ความหมายของ enable (v.) คือ" , "ความเป็นไปได้"
                        , "ความน่าจะเป็น" , "ทำให้เป็นไปได้" , "โอกาส" , 'c');
                break;
            case 37:
                question("ความหมายของ link (v.) คือ" , "การค้นหาข้อมูล" , "เข้าไปข้างใน" , "รายการข้อมูล" , "เชื่อม" , 'd');
                break;
            case 38:
                question("ความหมายของ debate (v.) คือ" , "ถกเถียง"
                        , "การให้ข้อมูล" , "นำเสนอ" , "ผู้ฟัง" , 'b');
                break;
            case 39:
                question("ความหมายของ participate in (v.) คือ" , "การพูดคุย" , "เข้าร่วม" , "การยุยง" , "การขอเข้าร่วม" , 'b');
                break;
            case 40:
                question("ความหมายของ rural (adj.) คือ" , "ชุมนุม"
                        , "การแบ่งกลุ่ม" , "ความเป็นผู้นำ" , "ชนบท" , 'd');
                break;
            case 41:
                question("ความหมายของ affairs (n.) คือ" , "เหตุการณ์" , "ผลกระทบ" , "ความไม่เท่าเทียม" , "การกระทำ" , 'a');
                break;
            case 42:
                question("ความหมายของ dial (v.) คือ" , "คลื่นวิทยุ"
                        , "การเชื่อมต่อ" , "หมุนหาคลื่นวิทยุ" , "การฟังคลื่นวิทยุ" , 'c');
                break;
            case 43:
                question("ความหมายของ highlight. (v.) คือ" , "กิจวัตรประจําวัน" , "สิ่งของสำคัญ" , "แสงไฟ" , "เน้นย้ำ" , 'd');
                break;
            case 44:
                question("ความหมายของ issue (n.) คือ" , "สิ่งที่ต้องทำ"
                        , "ความสำคัญ" , "ประเด็น" , "การอธิบาย" , 'c');
                break;
            case 45:
                question("ความหมายของ discuss (v.) คือ" , "อภิปราย" , "ชุมนุม" , "การเผยแพร่" , "ตัดสิน" , 'a');
                break;
            case 46:
                question("ความหมายของ connect (v.) คือ" , "การเข้าถึง"
                        , "ความเชื่อมโยง" , "การติดต่อ" , "เชื่อมต่อ" , 'd');
                break;
            case 47:
                question("ความหมายของ emphasize (v.) คือ" , "เหตุการณ์" , "ผู้นำ" , "เน้นย้ำ" , "ความผิดพลาด" , 'c');
                break;
            case 48:
                question("ความหมายของ financial situation (n.) คือ" , "สถานะทางการเงิน"
                        , "ความปลอดภัย" , "การดูแล" , "การใช้จ่าย" , 'a');
                break;
            case 49:
                question("ความหมายของ overcome (v.) คือ" , "การเร่งรีบเพื่อให้ถึงเป้าหมาย" , "การมาก่อนเวลา" , "เอาชนะ" , "เกินกว่าที่คาดหวัง" , 'c');
                break;
            case 50:
                question("ความหมายของ lack of (n.) คือ" , "การขาดแคลน"
                        , "เงินเฟ้อ" , "ทะเลสาบ" , "เสบียง" , 'a');
                break;
            case 51:
                question("ความหมายของ advantage (n.) คือ" , "การแก้แค้น" , "ข้อดี" , "ค่าเฉลี่ย" , "ผลกำไร" , 'b');
                break;
            case 52:
                question("ความหมายของ benefit (n.) คือ" , "ผลกระทบ"
                        , "การทำประโยชน์" , "ผลประโยชน์" , "ความต่อเนื่อง" , 'c');
                break;
            case 53:
                question("ความหมายของ set up (v.) คือ" , "เปลี่ยนแปลง" , "ยกขึ้น" , "ตั้งค่า" , "สร้าง" , 'd');
                break;
            case 54:
                question("ความหมายของ network (n.) คือ" , "เครือข่าย"
                        , "สื่อ" , "การส่งข้อความ" , "สื่อสาร" , 'a');
                break;
            case 55:
                question("ความหมายของ wage (n.) คือ" , "น้ำหนัก" , "ค่าจ้าง" , "เปียก" , "คลื่น" , 'b');
                break;
            case 56:
                question("ความหมายของ journalist (n.) คือ" , "นักการเมือง"
                        , "รายการ" , "นักข่าว" , "ผู้ดำเนินรายการ" , 'c');
                break;
            case 57:
                question("ความหมายของ develop (v.) คือ" , "การขนส่ง" , "ผู้พัฒนา" , "ผู้ขนส่ง" , "พัฒนา" , 'd');
                break;
            case 58:
                question("ความหมายของ recess (n.) คือ" , "ช่วงหยุดพักผ่อน"
                        , "หยุดสุดสัปดาห์" , "เวลาว่าง" , "อิสระ" , 'a');
                break;
            case 59:
                question("ความหมายของ auditory (adj.) คือ" , "ลำโพง" , "เกี่ยวกับการได้ยิน" , "การพูด" , "เสียง" , 'b');
                break;
            case 60:
                question("ความหมายของ legible (adj.) คือ" , "ตัวหนังสือ"
                        , "โต๊ะ" , "ที่อ่านง่าย" , "การเขียน" , 'c');
                break;
            case 61:
                question("ความหมายของ mumble (v.) คือ" , "จินตนาการ" , "ฟองสบู่" , "ก้อนหิน" , "พึมพำ" , 'd');
                break;
            case 62:
                question("ความหมายของ grasp (v.) คือ" , "เข้าใจ"
                        , "จับ" , "ถุงผ้า" , "การนึกถึง" , 'a');
                break;
            case 63:
                question("ความหมายของ wade (v.) คือ" , "ตกน้ำ" , "เดินลุยน้ำ" , "เล่นน้ำ" , "เปียกน้ำ" , 'b');
                break;
            case 64:
                question("ความหมายของ difficulty (n.) คือ" , "ความแตกต่าง"
                        , "ถูกต้อง" , "ความยากลำบาก" , "ความปลอดภัย" , 'c');
                break;
            case 65:
                question("ความหมายของ vulnerable (adj.) คือ" , "มีส่วนเกี่ยวข้อง" , "ความกังวล" , "การวางแผน" , "ไร้เดียงสา" , 'd');
                break;
            case 66:
                question("ความหมายของ addict to (v.) คือ" , "เสพติด"
                        , "สนใจ" , "ยาเสพติด" , "ไม่สนใจ" , 'a');
                break;
            case 67:
                question("ความหมายของ cope with (v.) คือ" , "ร่วมมือกับ" , "รับมือกับ" , "การขโมยผลงาน" , "ทำงานกับ" , 'b');
                break;
            case 68:
                question("ความหมายของ engage with (v.) คือ" , "หมั้นกับ"
                        , "การอยู่ร่วมกัน" , "มีส่วนเกี่ยวข้อง" , "หมั้น" , 'c');
                break;
            case 69:
                question("ความหมายของ anxiety (n.) คือ" , "ตื่นตระหนก" , "ตื่นตัว" , "ความกดดัน" , "ความกังวล" , 'd');
                break;
            case 70:
                question("ความหมายของ depression (n.) คือ" , "ความเครียด"
                        , "แรงบรรดาลใจ" , "ความกดดัน" , "การโกง" , 'a');
                break;
            case 71:
                question("ความหมายของ matter (n.) คือ" , "อย่างไรก็ตาม" , "ปัญหา" , "ต่อสู้" , "ชั้น" , 'b');
                break;
            case 72:
                question("ความหมายของ expert (n.) คือ" , "ความเชี่ยวชาญ"
                        , "ประสบการณ์" , "ผู้เชี่ยวชาญ" , "ผู้ไรประสบการณ์" , 'c');
                break;
            case 73:
                question("ความหมายของ expedition (n.) คือ" , "ความรู้" , "กระตุ้น" , "การตรวจสอบ" , "การเดินทาง" , 'd');
                break;
            case 74:
                question("ความหมายของ route (n.) คือ" , "เส้นทาง"
                        , "การเดินทาง" , "ที่หมาย" , "ท่องเที่ยว" , 'a');
                break;
            case 75:
                question("ความหมายของ failure (n.) คือ" , "หล่น" , "ความล้มเหลว" , "ผิดหวัง" , "ผิดคาด" , 'b');
                break;
            case 76:
                question("ความหมายของ tragedy (n.) คือ" , "นวัตกรรม"
                        , "วรรณกรรม" , "โศกนาฏกรรม" , "วรรณศิลป์" , 'c');
                break;
            case 77:
                question("ความหมายของ tragic (adj.) คือ" , "ค้นพบ" , "ตื่นตระหนก" , "การค้นหา" , "สลดใจ" , 'd');
                break;
            case 78:
                question("ความหมายของ explore (v.) คือ" , "สำรวจ"
                        , "พบเจอ" , "ผู้สำรวจ" , "ผู้ค้นพบ" , 'a');
                break;
            case 79:
                question("ความหมายของ explorer (n.) คือ" , "นักกวี" , "นักสำรวจ" , "นักเดินทาง" , "นักการเมือง" , 'b');
                break;
            case 80:
                question("ความหมายของ starvation (n.) คือ" , "ภาวะเงินเฟ้อ"
                        , "ภาวะขาดน้ำ" , "ภาวะอดอยาก" , "ภาวะเงินฝืด" , 'c');
                break;
            case 81:
                question("ความหมายของ frostbite (n.) คือ" , "หิมะถล่ม" , "หิมะตก" , "ลูกเห็บ" , "โรคหิมะกัด" , 'd');
                break;
            case 82:
                question("ความหมายของ survive (v.) คือ" , "เอาชีวิตรอด"
                        , "ชีวิต" , "ผู้รอดชีวิต" , "การเอาชีวิตรอด" , 'a');
                break;
            case 83:
                question("ความหมายของ survival (n.) คือ" , "การช่วยเหลือผู้รอดชีวิต" , "การเอาชีวิตรอด" , "ผู้รอดชีวิต" , "เอาชีวิตรอด" , 'b');
                break;
            case 84:
                question("ความหมายของ survivor (n.) คือ" , "เอาชีวิตรอด"
                        , "การเอาชีวิตรอด" , "ผู้รอดชีวิต" , "พลเมือง" , 'c');
                break;
            case 85:
                question("ความหมายของ Inuit (n.) คือ" , "สังคม" , "การสื่อสาร" , "พิธีกรรม" , "ชาวเอสกิโม" , 'd');
                break;
            case 86:
                question("ความหมายของ igloo (n.) คือ" , "กระท่อมของชาวเอสกิโม"
                        , "ชาวมองโกเลีย" , "ชาวแอฟริกาใต้" , "กระท่อมของชาวมองโกเลีย" , 'a');
                break;
            case 87:
                question("ความหมายของ freeze (v.) คือ" , "น้ำแข็ง" , "กลายเป็นน้ำแข็ง" , "ทำให้หยุดนิ่ง" , "อากาศเย็น" , 'b');
                break;
            case 88:
                question("ความหมายของ fur (n.) คือ" , "ขนสัตว์"
                        , "เครื่องในสัตว์" , "เสื้อขนสัตว์" , "เขาสัตว์" , 'c');
                break;
            case 89:
                question("ความหมายของ suffer (v.) คือ" , "ความวุ่นวาย" , "ทำให้เดือดร้อน" , "ลุกลน" , "ทนทุกข์ทรมาน" , 'd');
                break;
            case 90:
                question("ความหมายของ sledge (n.) คือ" , "ล้อเลื่อนหิมะ"
                        , "ใบพัด" , "หางเรือ" , "เครื่องยนต์" , 'a');
                break;
            case 91:
                question("ความหมายของ scurvy (n.) คือ" , "ภาวะขาดน้ำ" , "โรคขาดวิตามินซี" , "ภาวะอดอาหาร" , "วิตกกังวล" , 'b');
                break;
            case 92:
                question("ความหมายของ discover (v.) คือ" , "การรักษา"
                        , "ภูมิต้านทาน" , "ค้นพบ" , "การป้องกัน" , 'c');
                break;
            case 93:
                question("ความหมายของ wild (adj.) คือ" , "ทำให้เชื่อง" , "การฝึก" , "ลม" , "ไม่เชื่อง" , 'd');
                break;
            case 94:
                question("ความหมายของ wildlife (n.) คือ" , "สัตว์ป่า"
                        , "ฝึกให้เชื่อง" , "การเลี้ยงดู" , "สัตว์เลี้ยง" , 'a');
                break;
            case 95:
                question("ความหมายของ bone (n.) คือ" , "ความผิดพลาด" , "กระดูก" , "ไขกระดูก" , "ลูกบอล" , 'b');
                break;
            case 96:
                question("ความหมายของ remote (adj.) คือ" , "ขาดการติดต่อ"
                        , "สัญญาณ" , "ห่างไกล" , "สั่งการ" , 'c');
                break;
            case 97:
                question("ความหมายของ tracker (n.) คือ" , "เป้าหมาย" , "คนหลงป่า" , "กู้ภัย" , "คนนำทางเดินป่า" , 'd');
                break;
            case 98:
                question("ความหมายของ tusks (n.) คือ" , "งาช้าง"
                        , "นอแรด" , "เล็บเสือ" , "หงอนไก่" , 'a');
                break;
            case 99:
                question("ความหมายของ trumpeting (n.) คือ" , "เสียงแตร" , "เสียงร้องของช้าง" , "เสียงสัตว์ป่า" , "เสียงเครื่องดนตรี" , 'b');
                break;   
                
            } 
       }
     }
       
    result();
}

void result ()
{
    system("cls");
    cout << "______________________________________________\n" ;
    cout << "USERNAME : "<<username<<endl;
    cout << "Total Question = " <<Q_NO -1 << endl;
    cout << "Correct Answers = " << CORRECT << endl;
    cout << "Wrong Answers = " << WRONG << endl;
    if(CORRECT>WRONG)
        cout << "Result = PASS" << endl;
    else if(WRONG>CORRECT)
        cout << "Result = FAIL" << endl;
    else
        cout << "Result = Tie" <<endl;

    if(WRONG>CORRECT){
        cout << username <<" YOU NOOB !"<< endl;
        cout <<"Please try again"<<endl;
    }else if(WRONG==CORRECT){
        cout << username <<" YOU NOOB !"<< endl;
        cout <<"Please try again"<<endl;
    }
    cout << "______________________________________________\n" ;
    


    ifstream readMaxScoreFile ;
        readMaxScoreFile.open("C:\\Users\\boss\\Com_prog_project\\MaxscoreFile\\"+username+".txt") ;
        string textline ;
        int current ,x ;
        getline(readMaxScoreFile,textline) ;
        current = stoi(textline) ;
        if(current < CORRECT)
        {
            x = CORRECT ;

        }else
        {
            x = current ;
        } 
    readMaxScoreFile.close() ;

    ofstream result ;
        result.open(usernamefile,ios::app) ;
        result <<"Correct Answer =" <<  CORRECT <<endl ;
        result <<"Wrong Answer =" << WRONG << endl ;
        if(CORRECT>WRONG)
        result << "Result = PASS" << endl;
    else if(WRONG>CORRECT)
        result << "Result = FAIL" << endl  ;
    else
        result << "Result = Tie" <<endl ;
    
    result << "Max Score = "  << x <<  endl << endl ;
    result.close() ;


    result.open("C:\\Users\\boss\\Com_prog_project\\MaxscoreFile\\"+username+".txt") ;
    result << x ;
    result.close() ;
    }
    




void question (string question , string a ,string b ,string c ,string d , char correct_answer)
{
    cout << "______________________________________________\n" ;
    cout << question << endl;
    cout << "a.\t" << a << endl;
    cout << "b.\t" << b << endl;
    cout << "c.\t" << c << endl;
    cout << "d.\t" << d << endl;
    cout << "______________________________________________\n" ;
    char answer;
    cin >> answer;
    if(answer == correct_answer)
        CORRECT++;
    else 
        WRONG++;
    Q_NO++;
    display();
}



