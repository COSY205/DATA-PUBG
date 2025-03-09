#include "includes.cpp"
using json = nlohmann::json;
#define SLEEP_TIME 1000LL / 60LL
using namespace SDK;
static float timeCounter = 0.0f;
static int colorIndex = 0;
static std::time_t startTime = 0;
static float isRed = 0.0f, isGreen = 0.01f, isBlue = 0.0f;
char extra[32];
static std::string EXP = "First Login";
std::string g_Token, g_Auth;
std::string name ="";
std::string device = "";
std::string status = "";
std::string floating ="";
static float X1;
static bool Test;
static float X2;
static bool Test1;
std::string generateFakeIMEI() {
    std::string imei = "35";
    for (int i = 0; i < 13; ++i) {
        imei += std::to_string(rand() % 10);
    }
    return imei;
}
bool bValid = false;
const char* filePath = "/storage/emulated/0/Android/data/com.vng.pubgmobile/key.txt";
const char* filePath1 = "/storage/emulated/0/Android/data/com.vng.pubgmobile/root.txt";
const char* filePath2 = "/storage/emulated/0/Android/data/com.vng.pubgmobile/loghack.txt";
const char* modObbPath = "/storage/emulated/0/Download/obbmod/main.19525.com.vng.pubgmobile.obb";      
const char* originalObbPath = "/storage/emulated/0/Download/obbgoc/main.19525.com.vng.pubgmobile.obb"; 
const char* pubgObbPath = "/storage/emulated/0/Android/obb/com.vng.pubgmobile/main.19525.com.vng.pubgmobile.obb"; 
std::ifstream inputFile(filePath);
bool decry = true;
bool Bypass = true; 
bool WideView = false;
bool FlashSdk = false;
bool BodyColors = false;
bool BodyColors1 = false;
bool BodyColors2 = false;
bool Hackss = false;
bool Hackss1 = false;
bool playershowcode = false;
bool Hackss2 = false;
bool S1 = false;
bool S2 = false;
bool S3 = false;
bool Hackas = false;
bool Hackas1 = false;
bool Hackas2 = false;
bool isVietnamese = true;
bool isEnglish = false;
bool saveSettingChecked = false;
bool loadSettingClicked = false;
bool isVietnameseLast = false;
bool isEnglishLast = false;
bool selectAllFeatures = false;
bool selectAllFeaturesT = false;
bool selectAllFeaturesTT = false;
bool showConfirmationPopup = false;
bool confirmedSelection = false;
bool fpsSelection = false;
bool cv = false;
bool clipboardText = false;
bool Cache = false;
bool ngmoi = false;
bool ngcu = true;
bool isFightingGame = false;
bool showSteps = false;
bool rank = false;
bool level = false;
bool characterName = false;
bool xoaco = false;
bool xoacay = false;
bool xoada = false;
bool xoasuong = false;
bool xoanuoc = false;
bool mapErangel = false;
bool mapMiramar = false;
bool mapVikendi = false;
bool mapLivik = false;
bool mapSanhok = false;
bool ng = false;
bool bot = false;
bool ngvbot = false;
bool firewallEnabled = false;
bool isRooted = false;
bool checkRootFile() {
    std::ifstream file(filePath1);
    if (file) {
        std::string content;
        std::getline(file, content);
        file.close();
        return (content == "root");
    }
    return false;
}
static bool obbMod = false;
static bool obbGoc = false;
bool showSuccessPopup = false;
std::chrono::steady_clock::time_point successStartTime;
//================================================================================================//
#define GEngine_Offset 0xde24c70
#define GNames_Offset 0x78cfc08
#define GUObject_Offset 0x9999990
#define GNativeAndroidApp_Offset 0xd876fd0
#define ProccesEvent_Offset 0x7b326e4
#define GetActorArray 0x994dc6c
#define Actors_Offset 0xa0
//================================================================================================//
static int xsuit = 0;
static int bapeset = 0;
static int skinset = 0;
static int skinm4 = 0;
static int skinakm = 0;
static int skinscar = 0;
static int skinm7 = 0;
static int skinuzi = 0;
static int skinump45 = 0;
static int skinvector = 0;
static int skinbizon = 0;
static int skingroza = 0;
static int skinkar = 0;
static int skinm24 = 0;
static int skinawm = 0;
static int skindp28 = 0;
static int skinqbz = 0;
static int skinm16a4 = 0;
static int skinm249 = 0;
static int skinmini14 = 0;
static int skinslr = 0;
static int skinsks = 0;
static int skinpan = 0;
static int skinbg = 0;
static int skins1897 = 0;
static int skinemote = 0;
static int skinvss = 0;
static int skins12k = 0;
static int skinaug = 0;
static int skinmk14 = 0;
static int skinxsuit = 0;
static int skinmyth = 0;
static int skinfool = 0;
static int skinhmm = 0;
static int skinm41 = 0;
static int skinakm1 = 0;
static int skinscar1 = 0;
static int skinm71 = 0;
static int skinuzi1 = 0;
static int skinump451 = 0;
static int skinvector1 = 0;
static int skinbizon1 = 0;
static int skingroza1 = 0;
static int skinkar1 = 0;
static int skinm241 = 0;
static int skinawm1 = 0;
static int skindp281 = 0;
static int skinqbz1 = 0;
static int skinm16a41 = 0;
static int skinm2491 = 0;
static int skinmini141 = 0;
static int skinslr1 = 0;
static int skinsks1 = 0;
static int skinbackpack = 0;
static int skinhelmet = 0;
static int skinpan1 = 0;
static int skins18971 = 0;
static int skinvss1 = 0;
static int skins12k1 = 0;
static int skinaug1 = 0;
static int skinmk141 = 0;
static int skinsace32 = 0;
static int skincoupes = 0;
static int skinuaz = 0;
static int skincar = 0;
static int coupe = 0;
static int Uaz = 0;
static int Dacia = 0;
static int Motorcycle = 0;
static int Buggy = 0;
static int Scooter = 0;
static int monstertruck = 0;
namespace Active
{
inline int lastMotorcycleID = 0;
inline int newMotorcycleID = 0;
inline int lastScooterID = 0;
inline int newScooterID = 0;
inline int lastmonstertruckID = 0;
inline int newmonstertruckID = 0;
inline int lastBuggyID = 0;
inline int newBuggyID = 0;
inline int lastUazID = 0;
inline int newUazID = 0;
inline int lastDaciaID = 0;
inline int newDaciaID = 0;
inline int lastCoupeID = 0;
inline int newCoupeID = 0;
}
#include <fstream>
android_app *g_App = nullptr;
//================================================================================================//
int OpenURL(const char* url)
{
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;

    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;

    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;

    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL)
        return -3;

    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    if (method_id == NULL)
        return -4;
        
    jstring retStr = java_env->NewStringUTF(url);
    java_env->CallVoidMethod(g_App->activity->clazz, method_id, retStr);

    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;

    return 0;
}
//================================================================================================//
const char *getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s.c_str();
}

static char deviceName [256];
void getDeviceName(char *name) {
  __system_property_get("ro.product.brand", name);
}

static char deviceNamen [256];
void getDeviceNamen(char *name) {
  __system_property_get("ro.product.model", name);
}

static char deviceNamenn [256];
void getDeviceNamenn(char *name) {
  __system_property_get("ro.build.version.release", name);
}

std::string getCPUModel() {
    std::ifstream file("/proc/cpuinfo");
    std::string line;
    while (std::getline(file, line)) {
        if (line.find("Hardware") != std::string::npos) {
            return line.substr(line.find(":") + 2);
        }
    }
    return "Unknown CPU";
}

std::string getGPUModel() {
    FILE* pipe = popen("dumpsys SurfaceFlinger | grep GLES", "r");
    if (!pipe) return "Unknown GPU";
    char buffer[128];
    std::string result = "";
    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        result += buffer;
    }
    pclose(pipe);
    return result.empty() ? "Unknown GPU" : result;
}

std::string getRAMInfo() {
    std::ifstream file("/proc/meminfo");
    std::string line;
    while (std::getline(file, line)) {
        if (line.find("MemTotal") != std::string::npos) {
            return line.substr(line.find(":") + 2);
        }
    }
    return "Unknown RAM";
}
//================================================================================================//
void Circle3D(ImDrawList* draw, FVector origin, float radius, ImColor color, float thinkless)
{
    const int doan_thang = 50;
    float step = 2 * IM_PI / doan_thang;
    FVector2D prev;
    Vector3 curValid3 = Vector3(origin.X + radius, origin.Y, origin.Z);
    FVector curValidF;
    curValidF.X = curValid3.X;
    curValidF.Y = curValid3.Y;
    curValidF.Z = curValid3.Z;
    bool curValid = (curValidF, &prev);

    for (int i = 1; i <= doan_thang; ++i)
    {
        float angle = i * step;
        FVector2D cur;
        Vector3 nextValid3 = Vector3(origin.X + radius * cos(angle), origin.Y + radius * sin(angle), origin.Z);
        FVector nextValidF;
        nextValidF.X = nextValid3.X;
        nextValidF.Y = nextValid3.Y;
        nextValidF.Z = nextValid3.Z;
        bool nextValid = (nextValidF, &cur);
        if (curValid && nextValid)
        {
            draw->AddLine(ImVec2(prev.X, prev.Y), ImVec2(cur.X, cur.Y), color, thinkless);
        }
        curValid = nextValid;
        prev = cur;
    }
}
//================================================================================================//
void PNHText(const char* text, ImVec4 color)
{
    static auto start_time = std::chrono::high_resolution_clock::now();
    auto elapsed_seconds = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start_time).count() / 500.0f;
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 0.0f)); 
    for (int i = 0; i < strlen(text); i++)
    {
      ImGui::SameLine();
        float t = fmodf(elapsed_seconds + (float)i / (float)strlen(text), 1.0f); 
        ImVec4 currentColor = ImVec4(color.x * t, color.y * t, color.z * t, color.w); 
        ImGui::PushStyleColor(ImGuiCol_Text, currentColor); 
        ImGui::Text("%c", text[i]); 
        ImGui::PopStyleColor(); 
    }
    ImGui::PopStyleColor(); 
}
//================================================================================================//
bool IgnoreKnocked = false;
bool VisCheck = false;
bool IgnoreBots = false;
float Meter = 150;
bool AimTocDo = false;
float AimSmooth = 1.0f;
float FovCucMup = 123;
float GiamGiat = 1.15;
float RadarX=320,RadarY=255,RadarXW=349.498,RadarYW=256.187;
//================================================================================================//
#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))
#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
//================================================================================================//
void RotateTriangle(std::array<Vector3, 3> & points, float rotation) {
    const auto points_center = (points.at(0) + points.at(1) +  points.at(2)) / 3;
    for (auto & point : points) {
        point = point - points_center;
        const auto temp_x = point.X;
        const auto temp_y = point.Y;
        const auto theta = DEG2RAD(rotation);
        const auto c = cosf(theta);
        const auto s = sinf(theta);
        point.X = temp_x * c - temp_y * s;
        point.Y = temp_x * s + temp_y * c;
        point = point + points_center;
    }
}
//================================================================================================//
bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}
//================================================================================================//
template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
//================================================================================================//
#define HOOK_LIB
#define PATCH_LIB
#define HOOK_LIB_NO_ORIG
#define stru_1AE14          long
#define sub_2C0096          long
#define sub_2E876C          long
#define off_394AF0          long
#define off_394AC4          long
#define loc_302B10          long
#define dword_3E0E08        long
#define sub_BD57C           long
#define sub_BD31C           long
#define byte_3E0E5C         long
#define byte_3E0E5D         long
#define sub_2CB102          long
#define DWORD               long
#define _BYTE               uint8_t
#define _WORD               uint16_t
#define _DWORD              uint32_t
#define _QWORD              uint64_t
#define _OWORD              uint64_t
#define _BOOL8              uint64_t
#define INT8                int8_t
#define UINT8               uint8_t
#define INT16               int16_t
#define UINT16              uint16_t
#define INT32               int32_t
#define UINT32              uint32_t
#define INT64               int64_t
#define UINT64              uint64_t
#define BOOL                bool
#define PVOID               void*
#define LPVOID              void*
#define HANDLE              void*
#define DWORD_PTR           uintptr_t
#define LPSTR               char*
#define LPCSTR              const char*
#define WCHAR               wchar_t
#define LPWSTR              wchar_t*
#define LPCWSTR             const wchar_t*
#define HRESULT             long
#define SIZE_T              size_t
#define BOOL32              int32_t
#define FLOAT32             float
#define FLOAT64             double
#define GUID                struct { uint32_t Data1; uint16_t Data2; uint16_t Data3; uint8_t Data4[8]; }
#define LPTHREAD_START_ROUTINE void* (*)(void*)
#define LPVOID64            uint64_t
#define INT_PTR             intptr_t
#define UINT_PTR            uintptr_t
#define HRESULT_PTR         HRESULT*
#define LONGLONG            int64_t
#define ULONGLONG           uint64_t
#define TCHAR               char
#define LPCTSTR             const TCHAR*
#define LPCWSTR_PTR         LPCWSTR*
#define EVENT_HANDLE        HANDLE
#define FILE_HANDLE         HANDLE
#define SOCKET_HANDLE       SOCKET
#define CONTEXT             struct { uint32_t ContextFlags; uint32_t Dr0; uint32_t Dr1; uint32_t Dr2; uint32_t Dr3; uint32_t Dr6; uint32_t Dr7; }
#define ARRAY_SIZE(arr)     (sizeof(arr) / sizeof((arr)[0]))
#define PTR_SIZE            sizeof(void*)
#define NULL_PTR            ((void*)0)
#define INVALID_HANDLE_VALUE ((HANDLE)(LONG_PTR)-1)
#define MAX_PATH_LENGTH     260
#define MAX_NAME_LENGTH     256
#define MAX_BUFFER_SIZE     4096
#define TRUE                1
#define FALSE               0
#define BYTE                unsigned char
#define SHORT               signed short
#define USHORT              unsigned short
#define LONG                signed long
#define ULONG               unsigned long
#define WCHAR               wchar_t
#define LPBYTE              BYTE*
#define LPWORD              WORD*
#define LPDWORD             DWORD*
#define LPQWORD             QWORD*
#define BOOL_PTR           BOOL*
#define LPCBYTE             const BYTE*
#define LPCVOID             const void*
#define LPVOID_PTR          LPVOID*
#define HANDLE_PTR          HANDLE*
#define DWORD64_PTR         uint64_t*
#define PCHAR               char*
#define PCSTR               const char*
#define PVOID_PTR           void**
#define PINT                int*
#define PUINT               unsigned int*
#define PSIZE_T            size_t*
#define WCHAR_PTR           WCHAR*

json items_data;
uintptr_t anogs;
uintptr_t UE4;
uintptr_t anort;
uintptr_t ANOGS;
uintptr_t g_UE4;
uintptr_t Anogs;
uintptr_t gcloud;
uintptr_t g_Anogs;
uintptr_t g_gcloud;
uintptr_t PandoraVideo;
uintptr_t tgpa;
uintptr_t cubehawk;
uintptr_t shared;
uintptr_t INTLFoundation;
uintptr_t INTLCompliance;
uintptr_t CrashSight;
uintptr_t GCloudVoice;
uintptr_t ijkffmpeg;
uintptr_t gcloudcore;
uintptr_t gnustl_shared;
uintptr_t igshare;
uintptr_t ITOP;
uintptr_t marsxlog;
uintptr_t swappy;
uintptr_t GvoiceNN;
uintptr_t TDataMaster;
uintptr_t g_cloud;

DWORD roosterBase = 0;
DWORD libUE4Base = 0;
DWORD libanogsBase = 0;
DWORD chut = 0;
DWORD libanortBase = 0;
DWORD libanogsAlloc = 0;
DWORD libUE4Alloc = 0;
DWORD libcBase = 0;
DWORD libEgl_base = 0;
DWORD LibcAlloc = 0;
DWORD EglAlloc = 0;
DWORD hdmpve = 0;
unsigned int libanogsSize = 0x5eece0;
unsigned int libcSize = 0xC3000;
unsigned int libEglSize = 0x2000;
DWORD NewBase = 0;
#define libanogs "libanogs.so"
#define LibUE4 "libUE4.so"
#define libc "nb/libc.so"
#define libEGL "nb/libEGL.so"
//================================================================================================//
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;

bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;

static UEngine *GEngine = 0;
UWorld *GetWorld() {
    while (!GEngine) {
        GEngine = UObject::FindObject<UEngine>("UAEGameEngine Transient.UAEGameEngine_1"); 
        sleep(1);
    }
    if (GEngine) {
        auto ViewPort = GEngine->GameViewport;

        if (ViewPort) {
            return ViewPort->World;
        }
    }
    return 0;
}
TNameEntryArray *GetGNames() {
    return ((TNameEntryArray *(*)()) (UE4 + GNames_Offset))();
}

FVector GetBoneLocationByName(ASTExtraPlayerCharacter *Actor, const char *BoneName) {
    return Actor->GetBonePos(BoneName, FVector());
}
std::vector<AActor *> getActors() {
 auto World = GetWorld();
 if (!World)
  return std::vector<AActor *>();
 auto PersistentLevel = World->PersistentLevel;
 if (!PersistentLevel)
  return std::vector<AActor *>();
 struct GovnoArray {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };
    static thread_local GovnoArray Actors{};
    Actors = *(((GovnoArray*(*)(uintptr_t))(UE4 + GetActorArray))(reinterpret_cast<uintptr_t>(PersistentLevel)));
    if (Actors.count <= 0) {
        return {};
    }
    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.count; i++) {
        auto Actor = *(uintptr_t *) (Actors.base + (i * sizeof(uintptr_t)));
        if (Actor) {
            actors.push_back(reinterpret_cast<AActor *const>(Actor));
        }
    }
    return actors;
}

enum EAim {
  Distance = 0,
  Croshhair = 1
};

enum EAimTarget {
    Head = 0,
    Chest = 1,
    Body = 2
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

std::map<int, bool> Items;
std::map<int, float *> ItemColors;
//================================================================================================//
struct sConfig {
bool Radar;
bool Loot;
bool Nation;
float Prid;
float Pridd;
bool vesiol;
float Line;
float ColorFov;
float Skeleton;
float Fov;
float RadarX;	
float RadarY;
bool IpadS;
bool Rock;
//================================================================================================//
struct sESPMenu { 
bool Line;
bool Box;
bool Skeleton;
bool NghienNgap;
bool Health;
bool Distance;
bool Fov;
bool Weapon;
bool Name;
bool CarHealth;
bool CarDistance;
bool TeamID;
bool Caricon;
bool CarFuel;
bool PlayID;
bool CarName;
bool NoBot;
bool LootBox;
bool Loot;
bool LootItem;
bool PlayerID;
bool Radar;
bool Alert;
bool Alertn;
bool Win;
bool AutoFire;
bool Info;
bool GasCan;
bool Grenade;
};
sESPMenu ESPMenu;
//================================================================================================//
struct sHighRisk {
bool Recoil;
bool FlashSdk;
bool IPadView;
bool NoFog;
bool HitEffect;
bool GameInfo;
bool Cross;
bool NoSmoke;
bool Unlock1;
bool Damage;
bool Shake;
bool Ipad;
bool Unlock2;
bool Unlock3;
bool rp;
bool WeatherChange;
bool Crazycar;
};
sHighRisk HighRisk{0};
//================================================================================================//
struct sAimMenu {
bool Enable;
bool AimBot;
EAimTarget Target;
EAimTrigger Trigger;
float Cross;
float Dist;
float Meter;
};
sAimMenu SilentAim{0};
sAimMenu AimBot{0};
struct sOTHER {
bool FPS;
};
sOTHER OTHER{0};
//================================================================================================//
struct sColorsESP {
float *Text;
float *Menucolour;
float *Line;
float *Box;
float *Boxbot;
float *Name;
float *Distance;
float *Skeleton;
float *Skeletonbot;
float *Linebot;
float *LootBox;
float *Count;
float *Vehicle;
float *Fov;
};
sColorsESP ColorsESP{0};
};
sConfig Config{0};
//================================================================================================//
#define STB_NH_PNG_IMPLEMENTATION
//================================================================================================//
struct TextureInfo { ImTextureID textureId; int x; int y; int w; int h; };
    void DrawImage(int x, int y, int w, int h, ImTextureID Texture) {
    ImGui::GetForegroundDrawList()->AddImage(Texture, ImVec2(x, y), ImVec2(x + w, y + h));}
static struct Hand {
TextureInfo AKM;
TextureInfo AUG;
TextureInfo AWM;
TextureInfo CROSSBOW;
TextureInfo DBS;
TextureInfo DP28;
TextureInfo Desert_Eagle;
TextureInfo FIST;
TextureInfo Frag_Grenade;
TextureInfo G36C;
TextureInfo GROZA;
TextureInfo KAR98K;
TextureInfo M16A4;
TextureInfo M24;
TextureInfo M249;
TextureInfo M416;
TextureInfo M762;
TextureInfo MG3;
TextureInfo MINI14;
TextureInfo MK12;
TextureInfo MK14;
TextureInfo MK47;
TextureInfo MP5K;
TextureInfo Machete;
TextureInfo P18C;
TextureInfo P1911;
TextureInfo P92;
TextureInfo PAN;
TextureInfo PP19;
TextureInfo QBZ;
TextureInfo R1895;
TextureInfo R45;
TextureInfo S12K;
TextureInfo S1897;
TextureInfo S686;
TextureInfo SCARL;
TextureInfo SCORPION;
TextureInfo SKS;
TextureInfo SLR;
TextureInfo Sawed_off;
TextureInfo Smoke_Grenade;
TextureInfo TOMMY;
TextureInfo UMP45;
TextureInfo UZI;
TextureInfo VECTOR;
TextureInfo VSS;
TextureInfo WIN94;
} hand;
//================================================================================================//
    static TextureInfo textureInfo;
    TextureInfo createTexture(char *ImagePath) {
    int w, h, n;
    stbi_uc *data = stbi_load(ImagePath, &w, &h, &n, 0);
    GLuint texture;
    glGenTextures(1, &texture);
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    if (n == 3) {
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, w, h, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    } else {
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
    }stbi_image_free(data);
    textureInfo.textureId = reinterpret_cast<ImTextureID>((GLuint *) texture);
    textureInfo.w = w;
    textureInfo.h = h;
    return textureInfo;}
//================================================================================================//
    TextureInfo CreateTexture(const unsigned char* buf, int len) {
    TextureInfo image;
    unsigned char* image_data = stbi_load_from_memory(buf, len, &image.w, &image.h, NULL, 0);
    if (image_data == NULL) {perror("File does not exist");}
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    #if defined(GL_UNPACK_ROW_LENGTH) && !defined(__EMSCRIPTEN__)
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    #endif
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, image.w, image.h, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    stbi_image_free(image_data);
    image.textureId = (ImTextureID)image_texture;
    return image;}
//================================================================================================//
TextureInfo ic_clear_noob;
extern TextureInfo ic_clear_noob;
//================================================================================================//
void InitTexture() {
ic_clear_noob = CreateTexture(ic_clear_noob_data, sizeof(ic_clear_noob_data));

hand.AKM = CreateTexture(AKM_data, sizeof(AKM_data));
hand.AUG = CreateTexture(AUG_data, sizeof(AUG_data));
hand.AWM = CreateTexture(AWM_data, sizeof(AWM_data));
hand.CROSSBOW = CreateTexture(CROSSBOW_data, sizeof(CROSSBOW_data));
hand.DBS = CreateTexture(DBS_data, sizeof(DBS_data));
hand.DP28 = CreateTexture(DP28_data, sizeof(DP28_data));
hand.Desert_Eagle = CreateTexture(Desert_Eagle_data, sizeof(Desert_Eagle_data));
hand.FIST = CreateTexture(FIST_data, sizeof(FIST_data));
hand.Frag_Grenade = CreateTexture(Frag_Grenade_data, sizeof(Frag_Grenade_data));
hand.G36C = CreateTexture(G36C_data, sizeof(G36C_data));
hand.GROZA = CreateTexture(GROZA_data, sizeof(GROZA_data));
hand.KAR98K = CreateTexture(KAR98K_data, sizeof(KAR98K_data));
hand.M16A4 = CreateTexture(M16A4_data, sizeof(M16A4_data));
hand.M24 = CreateTexture(M24_data, sizeof(M24_data));
hand.M249 = CreateTexture(M249_data, sizeof(M249_data));
hand.M416 = CreateTexture(M416_data, sizeof(M416_data));
hand.M762 = CreateTexture(M762_data, sizeof(M762_data));
hand.MG3 = CreateTexture(MG3_data, sizeof(MG3_data));
hand.MINI14 = CreateTexture(MINI14_data, sizeof(MINI14_data));
hand.MK12 = CreateTexture(MK12_data, sizeof(MK12_data));
hand.MK14 = CreateTexture(MK14_data, sizeof(MK14_data));
hand.MK47 = CreateTexture(MK47_data, sizeof(MK47_data));
hand.MP5K = CreateTexture(MP5K_data, sizeof(MP5K_data));
hand.Machete = CreateTexture(Machete_data, sizeof(Machete_data));
hand.P18C = CreateTexture(P18C_data, sizeof(P18C_data));
hand.P1911 = CreateTexture(P1911_data, sizeof(P1911_data));
hand.P92 = CreateTexture(P92_data, sizeof(P92_data));
hand.PAN = CreateTexture(PAN_data, sizeof(PAN_data));
hand.PP19 = CreateTexture(PP19_data, sizeof(PP19_data));
hand.QBZ = CreateTexture(QBZ_data, sizeof(QBZ_data));
hand.R1895 = CreateTexture(R1895_data, sizeof(R1895_data));
hand.R45 = CreateTexture(R45_data, sizeof(R45_data));
hand.S12K = CreateTexture(S12K_data, sizeof(S12K_data));
hand.S1897 = CreateTexture(S1897_data, sizeof(S1897_data));
hand.S686 = CreateTexture(S686_data, sizeof(S686_data));
hand.SCARL = CreateTexture(SCARL_data, sizeof(SCARL_data));
hand.SCORPION = CreateTexture(SCORPION_data, sizeof(SCORPION_data));
hand.SKS = CreateTexture(SKS_data, sizeof(SKS_data));
hand.SLR = CreateTexture(SLR_data, sizeof(SLR_data));
hand.Sawed_off = CreateTexture(Sawed_off_data, sizeof(Sawed_off_data));
hand.Smoke_Grenade = CreateTexture(Smoke_Grenade_data, sizeof(Smoke_Grenade_data));
hand.TOMMY = CreateTexture(TOMMY_data, sizeof(TOMMY_data));
hand.UMP45 = CreateTexture(UMP45_data, sizeof(UMP45_data));
hand.UZI = CreateTexture(UZI_data, sizeof(UZI_data));
hand.VECTOR = CreateTexture(VECTOR_data, sizeof(VECTOR_data));
hand.VSS = CreateTexture(VSS_data, sizeof(VSS_data));
hand.WIN94 = CreateTexture(WIN94_data, sizeof(WIN94_data));
}
//================================================================================================//
typedef void (*ImGuiDemoMarkerCallback)(const char* file, int line, const char* section, void* user_data);
extern ImGuiDemoMarkerCallback  GImGuiDemoMarkerCallback;
extern void* GImGuiDemoMarkerCallbackUserData;
ImGuiDemoMarkerCallback         GImGuiDemoMarkerCallback = NULL;
void* GImGuiDemoMarkerCallbackUserData = NULL;
#define IMGUI_DEMO_MARKER(section)  do { if (GImGuiDemoMarkerCallback != NULL) GImGuiDemoMarkerCallback(__FILE__, __LINE__, section, GImGuiDemoMarkerCallbackUserData); } while (0)
#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};
uint32_t Colors[] = {0x53BB0C, 0x530826, 0x0FC3F4, 0xDC2855, 0x0A31DE, 0xBAA7FD, 0xCEDB3F, 0x286A45, 0x58F014, 0x45CAE6, 0x773702, 0xB0CEF0, 0x3C5F51, 0x453CD7, 0x364024, 0x439997, 0x4CB612, 0xC6B564, 0x17F250, 0xE41BC0, 0xAF8E27, 0x8E382E, 0x47A101, 0x9DAC33, 0x66F4CF, 0x59A9F0, 0x798D1A, 0x2EBB59, 0xBF66C3, 0x4BD8FB, 0xBBFA54, 0x6B9881, 0x144967, 0xBAA3AE, 0xE80B9D, 0x7BA552, 0x96A456, 0x17D7B4, 0x130C39, 0x3C06A8, 0x62737E, 0xA87E89, 0xB6D3E4, 0x66B77D, 0x66E304, 0x1B80E1, 0x7A06BC, 0xBFFB1B, 0x618506, 0x7E4D34};
//================================================================================================//
struct sRegion {
uintptr_t start, end;
};

std::vector<sRegion> trapRegions;


bool isObjectInvalid(UObject *obj) {
if (!Tools::IsPtrValid(obj)) {
return true;
}

if (!Tools::IsPtrValid(obj->ClassPrivate)) {
return true;
}

if (obj->InternalIndex <= 0) {
return true;
}

if (obj->NamePrivate.ComparisonIndex <= 0) {
return true;
}

if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
return true;
}

if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
return true;
}

return false;
}

int32_t ToColor(float *col) {
return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

FRotator ToRotator(FVector local, FVector target) {
FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

FRotator newViewAngle = {0};
newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
newViewAngle.Roll = (float) 0.f;

if (rotation.X >= 0.f)
newViewAngle.Yaw += 180.0f;

return newViewAngle;
}
//================================================================================================//
FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
bool flag = false;
double num = (double)Yaw;
double num2 = num * 0.017453292519943295;
float num3 = (float)std::cos(num2);
float num4 = (float)std::sin(num2);
float num5 = Origin.X - LocalOrigin.X;
float num6 = Origin.Y - LocalOrigin.Y;
struct FVector Xector;
Xector.X = (num6 * num3 - num5 * num4) / 150.f;
Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
struct FVector Xector2;
Xector2.X = Xector.X + PosX + Size.X / 2.f;
Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
bool flag2 = Xector2.X > PosX + Size.X;
if (flag2) {
Xector2.X = PosX + Size.X;
}else{
bool flag3 = Xector2.X < PosX;
if (flag3) {
Xector2.X = PosX;
}
}
bool flag4 = Xector2.Y > PosY + Size.Y;
if (flag4) {
Xector2.Y = PosY + Size.Y;
}else{
bool flag5 = Xector2.Y < PosY;
if (flag5){
Xector2.Y = PosY;
}
}
bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
if (flag6){
flag = true;
}
outbuff = flag;
return Xector2;
}

void BaeLuvLoveMup(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}
void BaeLuvLoveMup(float *angles) {
    if (angles[0] > 180)
        angles[0] -= 360;
    if (angles[0] < -180)
        angles[0] += 360;

    if (angles[0] < -75.f)
        angles[0] = -75.f;
    else if (angles[0] > 75.f)
        angles[0] = 75.f;

    while (angles[1] < -180.0f)
        angles[1] += 360.0f;
    while (angles[1] > 180.0f)
        angles[1] -= 360.0f;
}
//================================================================================================//
void BaeLuvLoveMup(Vector3 angles) {
    if (angles.X > 180)
        angles.X -= 360;
    if (angles.X < -180)
        angles.X += 360;

    if (angles.X < -75.f)
        angles.X = -75.f;
    else if (angles.X > 75.f)
        angles.X = 75.f;

    while (angles.Y < -180.0f)
        angles.Y += 360.0f;
    while (angles.Y > 180.0f)
        angles.Y -= 360.0f;
}
//================================================================================================//
void logTimeToFile() {
    std::ofstream logFile(filePath2, std::ios::app);

    if (logFile.is_open()) {
        time_t now = time(0);
        struct tm* timeInfo = localtime(&now);
        char buffer[50];
        strftime(buffer, sizeof(buffer), "[%H:%M:%S %d/%m/%Y]", timeInfo);

        logFile << buffer << " - Cảm ơn bạn" << std::endl; 
        logFile.close();
    }
}
//================================================================================================//
bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}

void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 2.5f);
}

void Box3D(ImDrawList *draw, FVector origin, FVector extends, ImColor col) {
    origin.X -= extends.X / 2.f;
    origin.Y -= extends.Y / 2.f;
    origin.Z -= extends.Z / 2.f;

 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
    W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
    {
        
    Line(draw,s1, s2, col);
    Line(draw,s2, s3, col);
    Line(draw,s3, s4, col);
    Line(draw,s4, s1, col);
 
    Line(draw,s5, s6, col);
    Line(draw,s6, s7, col);
    Line(draw,s7, s8, col);
    Line(draw,s8, s5, col);
 
    Line(draw,s1, s5, col);
    Line(draw,s2, s6, col);
    Line(draw,s3, s7, col);
    Line(draw,s4, s8, col);

}
}
//================================================================================================//

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)
        bool isInsideFOVs(int x, int y) {
        if (!FovCucMup)
        return true;
        
        int circle_x = glWidth / 2;
        int circle_y = glHeight / 2;
        int rad = FovCucMup;
        return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
        }
        
        auto GetTargetForAimBot() {
        ASTExtraPlayerCharacter *result = 0;
        float max = std::numeric_limits<float>::infinity();
        
        auto GWorld = GetWorld();
        if (GWorld) {
        ULevel *PersistentLevel = GWorld->PersistentLevel;
        if (PersistentLevel) {
        TArray<AActor *> Actors = *(TArray<AActor *> *) ((uintptr_t) PersistentLevel +
        Actors_Offset);

        auto localPlayer = g_LocalPlayer;
        auto localController = g_LocalController;
        
        if (localPlayer) {
        for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor))
        continue;
        
        if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
        auto Player = (ASTExtraPlayerCharacter *) Actor;
        auto Target = (ASTExtraPlayerCharacter *) Actor;
        
        float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
        if (dist > Meter)
        continue;
        if (Player->PlayerKey == localPlayer->PlayerKey)
        continue;
        if (Player->TeamID == localPlayer->TeamID)
        continue;
        if (Player->bDead)
        continue;
        if (IgnoreKnocked) {
        if (Player->Health == 0.0f)
        continue;
        }
        if (VisCheck) {
        auto headPos = Player->GetBonePos("Head", {});
        headPos.Z = headPos.Z + 1.0f;
        ImVec2 HeadPosSC;
        if(!localController->LineOfSightTo(localController->PlayerCameraManager, headPos, true))
        continue;
        }
        if (IgnoreBots) {
        if (Player->bEnsure)
        continue;
        }
        auto Root = Player->GetBonePos("Root", {});
        auto Head = Player->GetBonePos("Head", {});
        FVector2D RootSc, HeadSc;
        if (W2S(Root, &RootSc) && W2S(Head, &HeadSc)) {
        float height = abs(HeadSc.Y - RootSc.Y);
        float width = height * 0.65f;
        FVector middlePoint = {HeadSc.X + (width / 2), HeadSc.Y + (height / 2),
        0};
        if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) &&
        (middlePoint.Y >= 0 && middlePoint.Y <= glHeight)) {
        FVector2D v2Middle = FVector2D((float) (glWidth / 2),
        (float) (glHeight / 2));
        FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
        if(isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {
        float dist = FVector2D::Distance(v2Middle, v2Loc);
        
        if (dist < max) {
        max = dist;
        result = Player;
        }
        }
        }
        }
        }
        }
        return result;
        }
        }
        }
        }
//================================================================================================//
const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
switch (Vehicle->VehicleShapeType) {
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
return "Motorbike";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
return "Dacia";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
return "Mini Bus";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
return "Pick Up";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
return "Buggy";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
return "UAZ";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
return "PG117";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
return "Aquarail";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
return "Mirado";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
return "Rony";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
return "Scooter";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
return "Snow Mobile";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
return "Tuk Tuk";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
return "Snow Bike";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
return "Surf Board";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
return "Snow Board";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
return "Amphibious";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
return "Lada Niva";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
return "UAV";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
return "Mega Drop";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
return "Lamborghini";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
return "Gold Mirado";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
return "Big Foot";
break;
case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
return "UH60";
break;
default:
return "Vehicle";
break;
}
return "Vehicle";
}
//================================================================================================//
template<class T>
void GetAllActors(std::vector<T *> &Actors) {
    UGameplayStatics *gGameplayStatics = (UGameplayStatics *) gGameplayStatics->StaticClass();
    auto GWorld = GetWorld();
    if (GWorld) {
        TArray<AActor *> Actors2;
        gGameplayStatics->GetAllActorsOfClass((UObject *) GWorld, T::StaticClass(), &Actors2);
        for (int i = 0; i < Actors2.Num(); i++) {
            Actors.push_back((T *) Actors2[i]);
        }
    }
}
//================================================================================================//
void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;
void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {
            if (Config.AimBot.Enable) {
            ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
            if (Target) {
            bool triggerOk = false;
            if (Config.AimBot.Trigger != EAimTrigger::None) {
            if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
            triggerOk = g_LocalPlayer->bIsWeaponFiring;
            } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
            triggerOk = g_LocalPlayer->bIsGunADS;
            } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
            triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
            } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
            triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
            }
            } else triggerOk = true;
            if (triggerOk) {
            FVector targetAimPos = Target->GetBonePos("Head", {});
            if (Config.AimBot.Target == EAimTarget::Chest) {
            targetAimPos.Z -= 25.0f;
            }
            if (Config.AimBot.Target == EAimTarget::Body) {
            targetAimPos.Z -= 35.0f;
            }
            UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;
            if (ShootWeaponEntityComponent) {
            ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
            if (CurrentVehicle) {
            FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
            
            float dist = g_LocalPlayer->GetDistanceTo(Target);
            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
            
            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
            } else {
            FVector Velocity = Target->GetVelocity();
            
            float dist = g_LocalPlayer->GetDistanceTo(Target);
            auto timeToTravel = dist / ShootWeaponEntityComponent->BulletFireSpeed;
            
            targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
            }
            FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
            rot = UKismetMathLibrary::Conv_VectorToRotator(fDir);
            }
            }
            }
            }
            return orig_shoot_event(thiz, start, rot, weapon, unk1);
            }
//================================================================================================//
class FPSCounter {
protected:
    unsigned int m_fps;
    unsigned int m_fpscount;
    long m_fpsinterval;

public:
    FPSCounter() : m_fps(0), m_fpscount(0), m_fpsinterval(0) {
    }

    void update() {
        m_fpscount++;

        if (m_fpsinterval < time(0)) {
            m_fps = m_fpscount;

            m_fpscount = 0;
            m_fpsinterval = time(0) + 1;
        }
    }

    unsigned int get() const {
        return m_fps;
    }
};

FPSCounter fps;
//================================================================================================//
void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
    if (forward.X == 0.f && forward.Y == 0.f) {
        angles.X = forward.Z > 0.f ? -90.f : 90.f;
        angles.Y = 0.f;
    } else {
        angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
        angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
    }
    angles.Z = 0.f;
}
std::string GetNationName(std::string str)
    {
        if (str == "G1")
            return "Global";

        if (str == "AF")
            return "Afghanistan";

        if (str == "AL")
            return "Albania";

        if (str == "DZ")
            return "Algeria";

        if (str == "AS")
            return "American Samoa";

        if (str == "AD")
            return "Andorra";

        if (str == "AO")
            return "Angola";

        if (str == "AI")
            return "Anguilla";

        if (str == "AQ")
            return "Antarctica";

        if (str == "AG")
            return "Antigua & Barbuda";

        if (str == "AR")
            return "Argentina";

        if (str == "AM")
            return "Armenia";

        if (str == "AW")
            return "Aruba";

        if (str == "AU")
            return "Australia";

        if (str == "AT")
            return "Austria";

        if (str == "AZ")
            return "Azerbaijan";

        if (str == "BS")
            return "Bahamas";

        if (str == "BH")
            return "Bahrain";

        if (str == "BD")
            return "Bangladesh";

        if (str == "BB")
            return "Barbados";

        if (str == "BY")
            return "Belarus";

        if (str == "BE")
            return "BTEAMBKGium";

        if (str == "BZ")
            return "Belize";

        if (str == "BJ")
            return "Benin";

        if (str == "BM")
            return "Bermuda";

        if (str == "BT")
            return "Bhutan";

        if (str == "BO")
            return "Bolivia";

        if (str == "BQ")
            return "Bonaire";

        if (str == "BA")
            return "Bosnia";

        if (str == "BW")
            return "Botswana";

        if (str == "BV")
            return "Bouvet Island";

        if (str == "BR")
            return "Brazil";

        if (str == "IO")
            return "British Indian";

        if (str == "BN")
            return "Brunei Darussalam";

        if (str == "BG")
            return "Bulgaria";

        if (str == "BF")
            return "Burkina Faso";

        if (str == "BI")
            return "Burundi";

        if (str == "CV")
            return "Cabo Verde";

        if (str == "KH")
            return "Cambodia";

        if (str == "CM")
            return "Cameroon";

        if (str == "CA")
            return "Canada";

        if (str == "KY")
            return "Cayman Islands";

        if (str == "CF")
            return "Cent. African Rep.";

        if (str == "TD")
            return "Chad";

        if (str == "CL")
            return "Chile";

        if (str == "CN")
            return "China";

        if (str == "CX")
            return "Christmas Island";

        if (str == "CC")
            return "Cocos Islands";

        if (str == "CO")
            return "Colombia";

        if (str == "KM")
            return "Comoros";

        if (str == "CD" || str == "CG")
            return "Congo";

        if (str == "CK")
            return "Cook Islands";

        if (str == "CR")
            return "Costa Rica";

        if (str == "HR")
            return "Croatia";

        if (str == "CU")
            return "Cuba";

        if (str == "CW")
            return "Curacao";

        if (str == "CY")
            return "Cyprus";

        if (str == "CZ")
            return "Czechia";

        if (str == "CI")
            return "Cote d Ivoire";

        if (str == "DK")
            return "Denmark";

        if (str == "DJ")
            return "Djibouti";

        if (str == "DM")
            return "Dominica";

        if (str == "DO")
            return "Dominican Republic";

        if (str == "EC")
            return "Ecuador";

        if (str == "EG")
            return "Egypt";

        if (str == "SV")
            return "El Salvador";

        if (str == "GQ")
            return "Equatorial Guinea";

        if (str == "ER")
            return "Eritrea";

        if (str == "EE")
            return "Estonia";

        if (str == "SZ")
            return "Eswatini";

        if (str == "ET")
            return "Ethiopia";

        if (str == "FK")
            return "Falkland Islands";

        if (str == "FO")
            return "Faroe Islands";

        if (str == "FJ")
            return "Fiji";

        if (str == "FI")
            return "Finland";

        if (str == "FR")
            return "France";

        if (str == "GF")
            return "French Guiana";

        if (str == "PF")
            return "French Polynesia";

        if (str == "TF")
            return "French Territories";

        if (str == "GA")
            return "Gabon";

        if (str == "GM")
            return "Gambia";

        if (str == "GE")
            return "Georgia";

        if (str == "DE")
            return "Germany";

        if (str == "GH")
            return "Ghana";

        if (str == "GI")
            return "Gibraltar";

        if (str == "GR")
            return "Greece";

        if (str == "GL")
            return "Greenland";

        if (str == "GD")
            return "Grenada";

        if (str == "GP")
            return "Guadeloupe";

        if (str == "GU")
            return "Guam";

        if (str == "GT")
            return "Guatemala";

        if (str == "GG")
            return "Guernsey";

        if (str == "GN")
            return "Guinea";

        if (str == "GW")
            return "Guinea-Bissau";

        if (str == "GY")
            return "Guyana";

        if (str == "HT")
            return "Haiti";

        if (str == "HM")
            return "McDonald Islands";

        if (str == "VA")
            return "Vatican";

        if (str == "HN")
            return "Honduras";

        if (str == "HK")
            return "Hong Kong";

        if (str == "HU")
            return "Hungary";

        if (str == "JM")
            return "Jamaica";

        if (str == "JP")
            return "Japan";

        if (str == "JE")
            return "Jersey";

        if (str == "JO")
            return "Jordan";

        if (str == "KZ")
            return "Kazakhstan";

        if (str == "KE")
            return "Kenya";

        if (str == "KI")
            return "Kiribati";

        if (str == "KP")
            return "South Korea";

        if (str == "KR")
            return "North Korea";

        if (str == "KW")
            return "Kuwait";

        if (str == "KG")
            return "Kyrgyzstan";

        if (str == "LA")
            return "LP Democratic Rep.";

        if (str == "LV")
            return "Latvia";

        if (str == "LB")
            return "Lebanon";

        if (str == "LS")
            return "Lesotho";

        if (str == "LR")
            return "Liberia";

        if (str == "LY")
            return "Libya";

        if (str == "LI")
            return "Liechtenstein";

        if (str == "LT")
            return "Lithuania";

        if (str == "LU")
            return "Luxembourg";

        if (str == "MO")
            return "Macao";

        if (str == "MG")
            return "Madagascar";

        if (str == "MW")
            return "Malawi";

        if (str == "MY")
            return "Malaysia";

        if (str == "MV")
            return "Maldives";

        if (str == "ML")
            return "Mali";

        if (str == "MT")
            return "Malta";

        if (str == "MH")
            return "Marshall Islands";

        if (str == "MQ")
            return "Martinique";

        if (str == "MR")
            return "Mauritania";

        if (str == "MU")
            return "Mauritius";

        if (str == "YT")
            return "Mayotte";

        if (str == "MX")
            return "Mexico";

        if (str == "FM")
            return "Micronesia";

        if (str == "MD")
            return "Moldova";

        if (str == "MC")
            return "Monaco";

        if (str == "MN")
            return "Mongolia";

        if (str == "ME")
            return "Montenegro";

        if (str == "MS")
            return "Montserrat";

        if (str == "MA")
            return "Morocco";

        if (str == "MZ")
            return "Mozambique";

        if (str == "MM")
            return "Myanmar";

        if (str == "NA")
            return "Namibia";

        if (str == "NR")
            return "Nauru";

        if (str == "NP")
            return "Nepal";

        if (str == "NL")
            return "Netherlands";

        if (str == "NC")
            return "New Caledonia";

        if (str == "NZ")
            return "New Zealand";

        if (str == "NI")
            return "Nicaragua";

        if (str == "NE")
            return "Niger";

        if (str == "NG")
            return "Nigeria";

        if (str == "NU")
            return "Niue";

        if (str == "NF")
            return "Norfolk Island";

        if (str == "MP")
            return "Mariana Islands";

        if (str == "NO")
            return "Norway";

        if (str == "OM")
            return "Oman";

        if (str == "PK")
            return "Pakistan";

        if (str == "PW")
            return "Palau";

        if (str == "PS")
            return "Palestine";

        if (str == "PA")
            return "Panama";

        if (str == "PG")
            return "Papua New Guinea";

        if (str == "PY")
            return "Paraguay";

        if (str == "PE")
            return "Peru";

        if (str == "PH")
            return "Philippines";

        if (str == "PN")
            return "Pitcairn";

        if (str == "PL")
            return "Poland";

        if (str == "PT")
            return "Portugal";

        if (str == "PR")
            return "Puerto Rico";

        if (str == "QA")
            return "Qatar";

        if (str == "MK")
            return "North Macedonia";

        if (str == "RO")
            return "Romania";

        if (str == "RU")
            return "Russia";

        if (str == "RW")
            return "Rwanda";

        if (str == "RE")
            return "Reunion";

        if (str == "BL")
            return "Saint Barthelemy";

        if (str == "SH")
            return "Saint Helena";

        if (str == "KN")
            return "Kitts and Nevis";

        if (str == "LC")
            return "Saint Lucia";

        if (str == "MF")
            return "Saint Martin";

        if (str == "PM")
            return "Saint Pierre";

        if (str == "VC")
            return "Saint Vincent";

        if (str == "WS")
            return "Samoa";

        if (str == "SM")
            return "San Marino";

        if (str == "ST")
            return "Sao Tome";

        if (str == "SA")
            return "Saudi Arabia";

        if (str == "SN")
            return "Senegal";

        if (str == "RS")
            return "Serbia";

        if (str == "SC")
            return "Seychelles";

        if (str == "SL")
            return "Sierra Leone";

        if (str == "SG")
            return "Singapore";

        if (str == "SX")
            return "Sint Maarten";

        if (str == "SK")
            return "Slovakia";

        if (str == "SI")
            return "Slovenia";

        if (str == "SB")
            return "Solomon Islands";

        if (str == "SO")
            return "Somalia";

        if (str == "ZA")
            return "South Africa";

        if (str == "GS")
            return "South Georgia";

        if (str == "SS")
            return "South Sudan";

        if (str == "ES")
            return "Spain";

        if (str == "LK")
            return "Sri Lanka";

        if (str == "SD")
            return "Sudan";

        if (str == "SR")
            return "Suriname";

        if (str == "SJ")
            return "Svalbard";

        if (str == "SE")
            return "Sweden";

        if (str == "CH")
            return "Switzerland";

        if (str == "SY")
            return "Syria";

        if (str == "TW")
            return "Taiwan";

        if (str == "TJ")
            return "Tajikistan";

        if (str == "TZ")
            return "Tanzania";

        if (str == "TH")
            return "Thailand";

        if (str == "TL")
            return "Timor-Leste";

        if (str == "TG")
            return "Togo";

        if (str == "TK")
            return "Tokelau";

        if (str == "TO")
            return "Tonga";

        if (str == "TT")
            return "Trinidad Tobago";

        if (str == "TN")
            return "Tunisia";

        if (str == "TR")
            return "Turkey";

        if (str == "TM")
            return "Turkmenistan";

        if (str == "TC")
            return "Turks & Caicos Islands";

        if (str == "TV")
            return "Tuvalu";

        if (str == "UG")
            return "Uganda";

        if (str == "UA")
            return "Ukraine";

        if (str == "AE")
            return "United Arab Emirates";

        if (str == "G1")
            return "United Kingdom";

        if (str == "GB")
            return "United Kingdom";

        if (str == "US")
            return "America";

        if (str == "UY")
            return "Uruguay";

        if (str == "UZ")
            return "Uzbekistan";

        if (str == "VU")
            return "Vanuatu";

        if (str == "VE")
            return "Venezuela";

        if (str == "VN")
            return "Viet Nam";

        if (str == "VG")
            return "Virgin Islands";

        if (str == "VI")
            return "Virgin Islands";

        if (str == "WF")
            return "Wallis and Futuna";

        if (str == "EH")
            return "Western Sahara";

        if (str == "YE")
            return "Yemen";

        if (str == "ZM")
            return "Zambia";

        if (str == "ZW")
            return "Zimbabwe";

        if (str == "AX")
            return "Aland Islands";

        if (str == "IS")
            return "Iceland";

        if (str == "IN")
            return "India";

        if (str == "ID")
            return "Indonesia";

        if (str == "IR")
            return "Iran";

        if (str == "IQ")
            return "Iraq";

        if (str == "IE")
            return "Ireland";

        if (str == "IM")
            return "Isle of Man";

        if (str == "IL")
            return "Shit Country";

        if (str == "IT")
            return "Italy";

        return "";
	}
struct RInfoBlueTeam {
    std::string Name;
    std::string Nation;
    std::string ID;
    std::string TeamID;
    std::string Weapon;
    bool IsDead;
    float Distance;
};

struct {
    RInfoBlueTeam PlayerB[100];
    
} RoomInfo;


void InfoList() 
  {
    int AliveCount = 0 , IsVisible = 0;
    int PlayerB = 0, PlayerR = 0;
    for (int i = 0; i < sizeof(RoomInfo.PlayerB) / sizeof(RoomInfo.PlayerB[0]); i++) {
    RoomInfo.PlayerB[i].Name = "";
    RoomInfo.PlayerB[i].Nation = "";
    RoomInfo.PlayerB[i].ID = "";
    RoomInfo.PlayerB[i].TeamID = "";
    RoomInfo.PlayerB[i].Weapon = "";
    RoomInfo.PlayerB[i].IsDead = false;
    RoomInfo.PlayerB[i].Distance = 0.0f;
}
    ASTExtraPlayerCharacter * localPlayer = 0;

    ASTExtraPlayerController * localController = 0;

    auto Actors = getActors();

    auto GWorld = GetWorld();
    if (GWorld)
    {
        for (int i = 0; i < Actors.size(); i++)
        {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerController::StaticClass()))
            {
                localController = (ASTExtraPlayerController *) Actor;
                break;
            }
        }

        if (localController)
        {
            for (int i = 0; i < Actors.size(); i++)
            {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor))
                    continue;

                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
                {
                    if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey)
                    {
                        localPlayer = (ASTExtraPlayerCharacter *) Actor;
                        break;
                    }
                }
            }

            if (localPlayer)
            {
              
                for (int i = 0; i < Actors.size(); i++)
                {
                    auto Actor = Actors[i];
                    if (isObjectInvalid(Actor))
                        continue;

                    if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
                    {
                        auto Actor = Actors[i];
                        if (isObjectInvalid(Actor))
                            continue;

                        auto Player = (ASTExtraPlayerCharacter *) Actor;

                        RoomInfo.PlayerB[PlayerB].Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                        if (RoomInfo.PlayerB[PlayerB].Distance > 500.0f)
                            continue;

                        if (Player->PlayerKey == localController->PlayerKey)
                            continue;

                        if (Player->TeamID == localController->TeamID)
                            continue;
                        RoomInfo.PlayerB[PlayerB].IsDead = Player->bDead;
                        if (RoomInfo.PlayerB[PlayerB].IsDead)
                            continue;
                            
                        auto WeaponManagerComponent = Player->WeaponManagerComponent;
        if (WeaponManagerComponent) {
            {
          auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
          if (CurrentWeaponReplicated) {
           auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
           if (WeaponId) {
            std::string s;
             
            s += CurrentWeaponReplicated->GetWeaponName().ToString();
            
            RoomInfo.PlayerB[PlayerB].Weapon = s.c_str();
                            
           }
          }
         }
        }
                         
                         std::string _Name;
                        
                         if (Player->bEnsure)
                            {
                        _Name += Player->PlayerName.ToString();
                        _Name += "[ AI ]";
                        }else{
                         _Name += Player->PlayerName.ToString();
                         }
                         RoomInfo.PlayerB[PlayerB].Name = _Name.c_str();
                         RoomInfo.PlayerB[PlayerB].Nation = GetNationName(Player->Nation.ToString());
                         RoomInfo.PlayerB[PlayerB].TeamID = std::to_string((int)Player->TeamID);
                         std::string _PlayerID;
                         if (Player->bEnsure)
                            {
                            _PlayerID += "AI";
                        
                        }else{
                         _PlayerID = Player->PlayerUID.ToString();
                         }
                         RoomInfo.PlayerB[PlayerB].ID = _PlayerID.c_str();
                        AliveCount++;
                        PlayerB++;
                    }
                }
            }
        }
    }

    g_LocalController = localController;
    g_LocalPlayer = localPlayer;
} 
//================================================================================================//
void copyTextToClipboard(const char* text) {
    JNIEnv* env = g_App->activity->env;
    JavaVM* vm = g_App->activity->vm;
    JNIEnv* jniEnv;
    vm->AttachCurrentThread(&jniEnv, nullptr);

    jclass clipboardManagerClass = jniEnv->FindClass("android/content/ClipboardManager");
    jmethodID clipboardMethod = jniEnv->GetMethodID(clipboardManagerClass, "setText", "(Ljava/lang/CharSequence;)V");

    jobject clipboard = jniEnv->CallObjectMethod(g_App->activity->clazz, jniEnv->GetMethodID(jniEnv->GetObjectClass(g_App->activity->clazz), "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;"), jniEnv->NewStringUTF("clipboard"));

    jstring textString = jniEnv->NewStringUTF(text);
    jniEnv->CallVoidMethod(clipboard, clipboardMethod, textString);

    vm->DetachCurrentThread();
}
//================================================================================================//
void DrawESP(ImDrawList *draw, int screenWidthKIRIN, int screenHeightKIRIN) {
	static float isAutoSlider = -0.20;
  ImGui::GetForegroundDrawList()->AddText(NULL, ((float) density / 15.0f),{(float) glWidth * isAutoSlider + glWidth / 40,670}, IM_COL32(255, 255, 255, 255), "   Copyright © 2025 - By TEAM BKG MOD");
  ImGui::GetForegroundDrawList()->AddText(NULL, ((float) density / 15.0f),{(float) glWidth * isAutoSlider + glWidth / 40,670}, IM_COL32(0, 170, 255, 255), " ");
  if(isAutoSlider){
  auto isFramese = ImGui::GetFrameCount();
        if(isFramese % 30 == 0) 
        if(isAutoSlider > 1) {
        isAutoSlider = -0.20; }
        isAutoSlider += 0.001; }
//================================================================================================//
if (decry) {
 ImVec2 P1, P2;
 ImDrawList* pDrawList;
 const auto& CurrentWindowPos = ImGui::GetWindowPos();
 const auto& pBackgroundDrawList = ImGui::GetBackgroundDrawList();
 
 P1 = ImVec2(10000.000f, 10000.000f);
 P1.x += CurrentWindowPos.x;
 P1.y += CurrentWindowPos.y;
 P2 = ImVec2(-600.000f, -500.000f);
 P2.x += CurrentWindowPos.x;
 P2.y += CurrentWindowPos.y;
 pDrawList = pBackgroundDrawList;
 draw->AddRectFilled(P1,P2, IM_COL32(0, 0, 0, 255), 0);
 }
//================================================================================================//
ImU32 colors[7] = {
    IM_COL32(255, 0, 0, 255), 
    IM_COL32(255, 127, 0, 255), 
    IM_COL32(255, 255, 0, 255),
    IM_COL32(0, 255, 0, 255),  
    IM_COL32(0, 0, 255, 255),   
    IM_COL32(75, 0, 130, 255),  
    IM_COL32(143, 0, 255, 255)  
};

static float time = 0.0f;
time += ImGui::GetIO().DeltaTime;

int color_index_credit = ((int)(time * 2)) % 7;
std::string credit = " V1 ";
auto textSize = ImGui::CalcTextSize(credit.c_str(), 0, ((float) density / 15.5f));

draw->AddText(NULL, ((float) density / 10.5f), {((float) glWidth / 2) - (textSize.x / 2), 90}, colors[color_index_credit], credit.c_str());

    char buffer[256];
    float fps = ImGui::GetIO().Framerate;
    float speed = 1000.0f / fps;
    sprintf(buffer, isVietnamese ? "PING: %.3f | FPS: %.1f" : "PING: %.3f MS | FPS: %.1f", speed, fps);
    ImU32 greenColor = IM_COL32(0, 255, 0, 255);
    draw->AddText({((float) density / 10.0f), 575}, greenColor, buffer);

if (Config.AimBot.Enable) {
draw->AddCircle(ImVec2(glWidth / 2, glHeight / 2), FovCucMup, IM_COL32(245, 51, 158, 444), 100, 0.0f);
}
//================================================================================================//
if (Bypass) {
/*PATCH_LIB("libanogs.so", "0x12dfe0", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x12e040", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libUE4.so","0x4DE5608","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libUE4.so", "0x5F61ED4", "1F 20 03 D5");

PATCH_LIB("libgcloud.so", "0x495320", "FF FF FF FF FF");
PATCH_LIB("libgcloud.so", "0x421FD0", "FF FF FF FF FF");

PATCH_LIB("libanogs.so","0x2151F4","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so","0xE6D3C","00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x2C8D58", "00 00 80 D2 C0 03 5F D6");

PATCH_LIB("libanogs.so", "0x462940", "00 00 80 D2 00 00 80 D2");
PATCH_LIB("libanogs.so", "0x199e04", "00 00 80 D2 C0 03 5F D6");

PATCH_LIB("libanogs.so", "0x199E04", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x2CE98C", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x321BA8", "00 00 80 D2 C0 03 5F D6");
PATCH_LIB("libanogs.so", "0x462940", "00 00 80 D2 00 00 80 D2");*/
}
//================================================================================================//				
auto Actors = getActors();

int totalEnemies = 0, totalBots = 0;

ASTExtraPlayerCharacter *localPlayer = 0;

ASTExtraPlayerController *localController = 0;

std::string sFPS = "FPS: ";

if (Config.OTHER.FPS) {
draw->AddText({((float) density / 10.0f), 40},IM_COL32(0, 255, 0, 255),sFPS.c_str());
}
//================================================================================================//
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
localController = (ASTExtraPlayerController *) Actor;
break;
}
}

if (localController) {
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
localPlayer = (ASTExtraPlayerCharacter *) Actor;
break;
}
}
}

if (localPlayer) {
if (localPlayer->PartHitComponent) {
auto ConfigCollisionDistSqAngles = localPlayer->PartHitComponent->ConfigCollisionDistSqAngles;
for (int j = 0; j < ConfigCollisionDistSqAngles.Num(); j++) {
ConfigCollisionDistSqAngles[j].Angle = 90.0f;
}
localPlayer->PartHitComponent->ConfigCollisionDistSqAngles = ConfigCollisionDistSqAngles;
}
//================================================================================================//
        if (Config.AimBot.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetForAimBot();
        if (Target) {
        bool triggerOk = false;
        if (Config.AimBot.Trigger != EAimTrigger::None) {
        if (Config.AimBot.Trigger == EAimTrigger::Shooting) {
        triggerOk = localPlayer->bIsWeaponFiring;
        } else if (Config.AimBot.Trigger == EAimTrigger::Scoping) {
        triggerOk = localPlayer->bIsGunADS;
        } else if (Config.AimBot.Trigger == EAimTrigger::Both) {
        triggerOk = localPlayer->bIsWeaponFiring && localPlayer->bIsGunADS;
        } else if (Config.AimBot.Trigger == EAimTrigger::Any) {
        triggerOk = localPlayer->bIsWeaponFiring || localPlayer->bIsGunADS;
        }
        } else triggerOk = true;
        if (triggerOk) {
        FVector targetAimPos = Target->GetBonePos("Head", {});
        if (Config.AimBot.Target == EAimTarget::Chest) {
        targetAimPos.Z -= 25.0f;
        }
        if (Config.AimBot.Target == EAimTarget::Body) {
        targetAimPos.Z -= 32.0f;
        }
        auto WeaponManagerComponent = localPlayer->WeaponManagerComponent;
        if (WeaponManagerComponent) {
        auto propSlot = WeaponManagerComponent->GetCurrentUsingPropSlot();
        if ((int) propSlot.GetValue() >= 1 &&
        (int) propSlot.GetValue() <= 3) {
        auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
        if (CurrentWeaponReplicated) {
        auto ShootWeaponComponent = CurrentWeaponReplicated->ShootWeaponComponent;
        if (ShootWeaponComponent) {
        UShootWeaponEntity *ShootWeaponEntityComponent = ShootWeaponComponent->ShootWeaponEntityComponent;
        if (ShootWeaponEntityComponent) {
        ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
        if (CurrentVehicle) {
        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;
        float dist = localPlayer->GetDistanceTo(Target);
        auto timeToTravel = dist /
        ShootWeaponEntityComponent->BulletFireSpeed;
        targetAimPos = UKismetMathLibrary::Add_VectorVector(
        targetAimPos,
        UKismetMathLibrary::Multiply_VectorFloat(
        LinearVelocity, timeToTravel));
        } else {
        FVector Velocity = Target->GetVelocity();
        float dist = localPlayer->GetDistanceTo(Target);
        auto timeToTravel = dist /
        ShootWeaponEntityComponent->BulletFireSpeed;
        targetAimPos = UKismetMathLibrary::Add_VectorVector(
        targetAimPos,
        UKismetMathLibrary::Multiply_VectorFloat(
        Velocity, timeToTravel));
        }
        if (Config.AimBot.Enable) {
        if (g_LocalPlayer->bIsGunADS) {
        if (g_LocalPlayer->bIsWeaponFiring) {
        float dist = g_LocalPlayer->GetDistanceTo(Target) / 100.f;
        targetAimPos.Z -= dist * GiamGiat;
        }  
        }
        }
FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, g_LocalController->PlayerCameraManager->CameraCache.POV.Location);
                                            FRotator Yaptr = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                                            FRotator CpYaT = localController->PlayerCameraManager->CameraCache.POV.Rotation;
                                            Yaptr.Pitch -= CpYaT.Pitch;
                                            Yaptr.Yaw -= CpYaT.Yaw;
                                            Yaptr.Roll = 0.f;
                                            BaeLuvLoveMup(Yaptr);
                                            CpYaT.Pitch += Yaptr.Pitch / AimSmooth;
                                            CpYaT.Yaw += Yaptr.Yaw / AimSmooth;
                                            CpYaT.Roll = 0.f;
                                            localController->SetControlRotation(CpYaT,"");
                                            }
                                            }
                                            }
                                            }
                                            }
                                            }
                                            }
                                            }
//================================================================================================//
for (int i = 0; i < Actors.size(); i++) {
auto Actor = Actors[i];
if (isObjectInvalid(Actor))
continue;

if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
long PlayerBoxClrCf = IM_COL32(0,255,0, 255);
long PlayerBoxClrCf2 = IM_COL32(0,255,0, 25);
auto Player = (ASTExtraPlayerCharacter *) Actor;
if (!localController->LineOfSightTo(Player, {0, 0, 0}, true)) {
PlayerBoxClrCf = IM_COL32(223,0,41, 255);
PlayerBoxClrCf2 = IM_COL32(223,0,41, 25);
}

float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
if (Distance > 500.0f)
continue;

if (Player->PlayerKey == localController->PlayerKey)
continue;

if (Player->TeamID == localController->TeamID)
continue;

if (Player->bDead)
continue;

int healthOutline;

if (!Player->Mesh)
continue;

if (Player->bEnsure)

totalBots++;
else totalEnemies++;		
if (Config.ESPMenu.NoBot)
if (Player->bEnsure)
continue;

auto headPos = Player->GetBonePos("Head", {});
headPos.Z = headPos.Z + 1.0f;
ImVec2 HeadPosSC;
auto RootPos = Player->GetBonePos("Root", {});
ImVec2 RootPosSC;
auto upper_r = Player->GetBonePos("upperarm_r", {});
ImVec2 upper_rPoSC;
auto lowerarm_r = Player->GetBonePos("lowerarm_r", {});
ImVec2 lowerarm_rPoSC;
auto hand_r = Player->GetBonePos("hand_r", {});
ImVec2 hand_rPoSC;
auto upper_l = Player->GetBonePos("upperarm_l", {});
ImVec2 upper_lPoSC;
auto lowerarm_l = Player->GetBonePos("lowerarm_l", {});
ImVec2 lowerarm_lSC;
auto hand_l = Player->GetBonePos("hand_l", {});
ImVec2 hand_lPoSC;
auto thigh_l = Player->GetBonePos("thigh_l", {});
ImVec2 thigh_lPoSC;
auto calf_l = Player->GetBonePos("calf_l", {});
ImVec2 calf_lPoSC;
auto foot_l = Player->GetBonePos("foot_l", {});
ImVec2 foot_lPoSC;
auto thigh_r = Player->GetBonePos("thigh_r", {});
ImVec2 thigh_rPoSC;
auto calf_r = Player->GetBonePos("calf_r", {});
ImVec2 calf_rPoSC;
auto foot_r = Player->GetBonePos("foot_r", {});
ImVec2 foot_rPoSC;
auto neck_01 = Player->GetBonePos("neck_01", {});
ImVec2 neck_01PoSC;
auto Pelvis = Player->GetBonePos("pelvis", {});
ImVec2 PelvisPoSC;
if (W2S(headPos, (FVector2D *)&HeadPosSC)&& 
W2S(upper_r, (FVector2D *)&upper_rPoSC)&& 
W2S(upper_l, (FVector2D *)&upper_lPoSC)&& 
W2S(lowerarm_r, (FVector2D *)&lowerarm_rPoSC)&& 
W2S(hand_r,(FVector2D *)&hand_rPoSC)&&
W2S(lowerarm_l, (FVector2D *)&lowerarm_lSC)&&
W2S(hand_l, (FVector2D *)&hand_lPoSC)&&
W2S(thigh_l, (FVector2D *)&thigh_lPoSC)&&
W2S(calf_l, (FVector2D *)&calf_lPoSC)&&
W2S(foot_l, (FVector2D *)&foot_lPoSC)&&
W2S(thigh_r, (FVector2D *)&thigh_rPoSC)&&
W2S(calf_r, (FVector2D *)&calf_rPoSC)&&
W2S(foot_r, (FVector2D *)&foot_rPoSC)&&
W2S(neck_01, (FVector2D *)&neck_01PoSC)&&
W2S(Pelvis, (FVector2D *)&PelvisPoSC)&&
W2S(RootPos, (FVector2D *)&RootPosSC)) {
//================================================================================================//
if (Config.ESPMenu.Line) {
             int colorLine = GetRandomColorByIndexAlpa(Player->TeamID);
                                int colorText = GetRandomColorByIndexBack(Player->TeamID);
         if (Player->bEnsure) {
                                draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC,
                                                  PlayerBoxClrCf, Config.Line);
                            } else {
                                    draw->AddLine({(float) glWidth / 2, 0}, HeadPosSC,
                                                  PlayerBoxClrCf,Config.Line);
                                }
       }
//================================================================================================//
 if (Test) {
USceneComponent* MeshContainer = g_LocalPlayer->MeshContainer;
MeshContainer->SetWorldScale3D({X1, X1, X1});
}
//================================================================================================//
if (Test1) {
    UCameraComponent *FPPCameraComp = localPlayer->FPPCameraComp;
    if (FPPCameraComp){
        FPPCameraComp->SetFieldOfView(X2);
    }
}
//================================================================================================//
if (Config.Rock) {
static float DanceValue = 0.0f;
static float DancerValue = 0.0f;
USceneComponent* MeshContainer = localPlayer->MeshContainer;
MeshContainer->RelativeRotation = { 0,DanceValue ,0 };
DanceValue += DancerValue;
if (DanceValue >= 360.0f)
DanceValue = 0.0f;
DanceValue += 30;
}
//================================================================================================//
if (Config.ESPMenu.TeamID || Config.ESPMenu.Name){
                                    ImGuiStyle &style = ImGui::GetStyle();
                                    ImVec4 savedTextColor = style.Colors[ImGuiCol_Text];
                                    style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
        std::string s;
        

                                  if (Config.ESPMenu.TeamID) {
                                        s += "[" + std::to_string(Player->TeamID) + "]   ";
                                    }

                                    if (Config.ESPMenu.Name) {
                                    
                                    
                                        if (isVietnamese) {
    s += Player->bEnsure ? "Bot Lỏ" : "Người Chơi Thật";
} else if (isEnglish) {
    s += Player->bEnsure ? "Bot Noob" : "Player Real";
}

                                    }

                                    

                                    auto textSize = ImGui::CalcTextSize(s.c_str(), 0,
                                                                         ((float) density / 15.0f));

                                    float strokeSize = 1.5f;
                                    for (float x = -strokeSize; x <= strokeSize; x += strokeSize) {
                                        for (float y = -strokeSize;
                                             y <= strokeSize; y += strokeSize) {
                                            draw->AddText(NULL, ((float) density / 15.0f),{RootPosSC.x  - (textSize.x / 2) + x,RootPosSC.y - -2 + y}, IM_COL32(0, 0, 0, 255),s.c_str());
                                        }
                                    }

                                    draw->AddText(NULL, ((float) density / 15.0f),{RootPosSC.x  -(textSize.x / 2), RootPosSC.y - -2}, IM_COL32(255, 165, 0, 255), s.c_str());

                                    style.Colors[ImGuiCol_Text] = savedTextColor;
                                                                      
					     }
//================================================================================================//
if (Config.ESPMenu.NghienNgap) {
                                    static std::vector<std::string> right_arm{"neck_01",
                                                                              "clavicle_r",
                                                                              "upperarm_r",
                                                                              "lowerarm_r",
                                                                              "hand_r", "item_r"};
                                    static std::vector<std::string> left_arm{"neck_01",
                                                                             "clavicle_l",
                                                                             "upperarm_l",
                                                                             "lowerarm_l",
                                                                             "hand_l", "item_l"};
                                    static std::vector<std::string> spine{"Head", "neck_01",
                                                                          "spine_03",
                                                                          "spine_02", "spine_01",
                                                                          "pelvis"};
                                    static std::vector<std::string> lower_right{"pelvis", "thigh_r",
                                                                                "calf_r", "foot_r"};
                                    static std::vector<std::string> lower_left{"pelvis", "thigh_l",
                                                                               "calf_l", "foot_l"};
                                    static std::vector<std::vector<std::string>> skeleton{right_arm,
                                                                                          left_arm,
                                                                                          spine,
                                                                                          lower_right,
                                                                                          lower_left};

                                    for (auto &boneStructure: skeleton) {
                                        std::string lastBone;
                                        for (std::string &currentBone: boneStructure) {
                                            if (!lastBone.empty()) {
                                                ImVec2 boneFrom, boneTo;
                                                if (W2S(Player->GetBonePos(lastBone.c_str(), {}),
                                                        (FVector2D *) &boneFrom) &&
                                                    W2S(Player->GetBonePos(currentBone.c_str(), {}),
                                                        (FVector2D *) &boneTo)) {
                                                    draw->AddLine(boneFrom, boneTo,
                                                                  PlayerBoxClrCf,Config.Skeleton);
                                                }
                                            }
                                            lastBone = currentBone;
                                        }
                                    }
                                }
//================================================================================================//
if(Config.ESPMenu.Weapon)
        {
                auto rrrr = Player->GetBonePos("Head", {});
                auto WeaponManagerComponent = Player->WeaponManagerComponent;
                if (WeaponManagerComponent) {
                auto CurrentWeaponReplicated = (ASTExtraShootWeapon *)WeaponManagerComponent->CurrentWeaponReplicated;
                if (CurrentWeaponReplicated) {
                auto WeaponId = (int)CurrentWeaponReplicated->GetWeaponID();
                auto wppp = CurrentWeaponReplicated->GetWeaponID();
                if (WeaponId) {
                auto Weapon_Name = CurrentWeaponReplicated->GetWeaponName().ToString();
                TextureInfo textureInfo{};
                switch (wppp) {
                case 107001:
                if(Weapon_Name = "CrossBow"){textureInfo = hand.CROSSBOW;}
                break;
                case 101001:
                if(Weapon_Name = "AKM"){textureInfo = hand.AKM;}
                break;
                case 101002:
                if(Weapon_Name = "M16A4"){textureInfo = hand.M16A4;}
                break;
                case 101003:
                if(Weapon_Name = "SCAR-L"){textureInfo = hand.SCARL;}
                break;
                case 101004:
                if(Weapon_Name = "M416"){textureInfo = hand.M416;}
                break;
                case 101005:
                if(Weapon_Name = "Groza"){textureInfo = hand.GROZA;}
                break;
                case 101006:
                if(Weapon_Name = "AUG A3"){textureInfo = hand.AUG;}
                break;
                case 101007:
                if(Weapon_Name = "QBZ"){textureInfo = hand.QBZ;}
                break;
                case 101008:
                if(Weapon_Name = "M762"){textureInfo = hand.M762;}
                break;
                case 101009:
                if(Weapon_Name = "Mk47 Mutant"){textureInfo = hand.MK47;}
                break;
                case 101010:
                if(Weapon_Name = "G36C"){textureInfo = hand.G36C;}
                break;
                case 101100:
                if(Weapon_Name = "FAMAS"){textureInfo = hand.SCARL;}
                break;
                case 105001:
                if(Weapon_Name = "M249"){textureInfo = hand.M249;}
                break;
                case 105002:
                if(Weapon_Name = "DP-28"){textureInfo = hand.DP28;}
                break;
                case 102001:
                if(Weapon_Name = "UZI"){textureInfo = hand.UZI;}
                break;
                case 102002:
                if(Weapon_Name = "UMP45"){textureInfo = hand.UMP45;}
                break;
                case 102003:
                if(Weapon_Name = "Vector"){textureInfo = hand.VECTOR;}
                break;
                case 102004:
                if(Weapon_Name = "Tompson SMG"){textureInfo = hand.TOMMY;}
                break;
                case 102005:
                if(Weapon_Name = "PP-19 Bizon"){textureInfo = hand.PP19;}
                break;
                case 102007:
                if(Weapon_Name = "Skorpion"){textureInfo = hand.SCORPION;}
                break;
                case 103001:
                if(Weapon_Name = "Kar98K"){textureInfo = hand.KAR98K;}
                break;
                case 103002:
                if(Weapon_Name = "M24"){textureInfo = hand.M24;}
                break;
                case 103003:
                if(Weapon_Name = "AWM"){textureInfo = hand.AWM;}
                break;
                case 103004:
                if(Weapon_Name = "SKS"){textureInfo = hand.SKS;}
                break;
                case 103005:
                if(Weapon_Name = "VSS"){textureInfo = hand.VSS;}
                break;
                case 103006:
                if(Weapon_Name = "Mini14"){textureInfo = hand.MINI14;}
                break;
                case 103007:
                if(Weapon_Name = "Mk14"){textureInfo = hand.MK14;}
                break;
                case 103008:
                if(Weapon_Name = "Win94"){textureInfo = hand.WIN94;}
                break;
                case 103009:
                if(Weapon_Name = "SLR"){textureInfo = hand.SLR;}
                break;
                case 103010:
                if(Weapon_Name = "QBU"){textureInfo = hand.SLR;}
                break;
                case 103011:
                if(Weapon_Name = "Mosin Nagant Sniper Rifle"){textureInfo = hand.KAR98K;}
                break;
                case 103100:
                if(Weapon_Name = "Mk12"){textureInfo = hand.MK12;}
                break;
                case 104001:
                if(Weapon_Name = "S686"){textureInfo = hand.S686;}
                break;
                case 104002:
                if(Weapon_Name = "S1897"){textureInfo = hand.S1897;}
                break;
                case 104003:
                if(Weapon_Name = "S12K"){textureInfo = hand.S12K;}
                break;
                case 104004:
                if(Weapon_Name = "DP12"){textureInfo = hand.DBS;}
                break;
                case 104101:
                if(Weapon_Name = "M1014 Shotgun"){textureInfo = hand.S12K;}
                break;
                case 106006:
                if(Weapon_Name = "Sawed-off"){textureInfo = hand.Sawed_off;}
                break;
                case 106001:
                if(Weapon_Name = "P92"){textureInfo = hand.P92;}
                break;
                case 106002:
                if(Weapon_Name = "P1911"){textureInfo = hand.P1911;}
                break;
                case 106003:
                if(Weapon_Name = "R1895"){textureInfo = hand.R1895;}
                break;
                case 106004:
                if(Weapon_Name = "P18C"){textureInfo = hand.P18C;}
                break;
                case 106005:
                if(Weapon_Name = "R45"){textureInfo = hand.R45;}
                break;
                case 106007:
                case 106008:
                case 106009:
                case 1060010:             
                if(Weapon_Name = "Desert Eagle"){textureInfo = hand.Desert_Eagle;}
                break;
                case 108001:
                case 108002:
                case 108003:
                if(Weapon_Name = "Machete"){textureInfo = hand.Machete;}
                break;
                case 108004:             
                if(Weapon_Name = "Pan"){textureInfo = hand.PAN;}
                break;               
                case 602001:
                if(Weapon_Name = "Stun"){textureInfo = hand.Smoke_Grenade;}
                break;
                case 602002:
                if(Weapon_Name = "Smoke"){textureInfo = hand.Smoke_Grenade;}
                break;
                case 602003:
                if(Weapon_Name = "Molotov"){textureInfo = hand.Frag_Grenade;}
                break;      
                case 602004:
                if(Weapon_Name = "Grenade"){textureInfo = hand.Frag_Grenade;}
                break;  
                }DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 82 - (float) textureInfo.y / 3.0f), textureInfo.w, textureInfo.h, textureInfo.textureId);
                }} else { textureInfo = hand.FIST;                                          
                DrawImage((int) (HeadPosSC.x - 1 - (float) textureInfo.w / 2), (int) (HeadPosSC.y - 99.1  + 47.337 - (float) textureInfo.y / 3.0f), textureInfo.w, textureInfo.h, textureInfo.textureId);
                }
                }
                }
//================================================================================================//
if (Config.ESPMenu.Health) {
                                    int CurHP = (int) std::max(0, std::min((int) Player->Health, (int) Player->HealthMax));
                                    int MaxHP = (int) Player->HealthMax;

                                    long HPColor = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min((510 * CurHP) / MaxHP, 255), 0, 155);

                                    if (Player->Health == 0.0f && !Player->bDead) {
                                        HPColor = IM_COL32(9, 117, 20, 250);

                                        CurHP = Player->NearDeathBreath;
                                        if (Player->NearDeatchComponent) {
                                            MaxHP = Player->NearDeatchComponent->BreathMax;
                                        }
                                    }

                                    float boxWidth = density / 6.0f;
                                    boxWidth -= std::min(((boxWidth / 2) / 700.0f) * Distance, boxWidth / 2);
                                    float boxHeight = boxWidth * 0.15f;


                                    ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2), HeadPosSC.y - (boxHeight * 2.5f)};

                                    ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP), vStart.y + boxHeight};
                                    ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};

                                    draw->AddRectFilled(vStart, vEndFilled, HPColor, 0.0f);
                                    draw->AddRect(vStart, vEndRect, IM_COL32(0, 0, 0, 205), 0.0f);
                               
         
        						 }
//================================================================================================//
if (Cache) {
system("rm -rf /data/data/com.vng.pubgmobile/cache");
system("rm -rf /data/data/com.vng.pubgmobile/files/cacheFile.txt");
system("rm -rf /data/data/com.vng.pubgmobile/files/login-identifier.txt");
system("rm -rf /data/data/com.vng.pubgmobile/files/log");
}
//================================================================================================//
 if (Config.ESPMenu.Alert) {
                                    bool shit = false;
                            FVector MyPosition, EnemyPosition;
                            ASTExtraVehicleBase * CurrentVehiclea = Player->CurrentVehicle;
                            if (CurrentVehiclea) { 
                                MyPosition = CurrentVehiclea->RootComponent->RelativeLocation;
                            } else {
                                MyPosition = Player->RootComponent->RelativeLocation;
                            }
                            ASTExtraVehicleBase * CurrentVehicle = localPlayer->CurrentVehicle;
                            if (CurrentVehicle) {
                                EnemyPosition = CurrentVehicle->RootComponent->RelativeLocation;
                            } else { 
                                EnemyPosition = localPlayer->RootComponent->RelativeLocation;
                            }
                            FVector EntityPos = WorldToRadar(localController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw, MyPosition, EnemyPosition, NULL, NULL, Vector3(glWidth, glHeight, 0), shit);  
                            FVector angle = FVector();
                            Vector3 forward = Vector3((float)(glWidth / 2) - EntityPos.X, (float)(glHeight / 2) - EntityPos.Y, 0.0f);  
                            VectorAnglesRadar(forward, angle);
                            const auto angle_yaw_rad = DEG2RAD(angle.Y + 180.f);
                            const auto new_point_x = (glWidth / 2) + (55) / 2 * 8 * cosf(angle_yaw_rad);  
                            const auto new_point_y = (glHeight / 2) + (55) / 2 * 8 * sinf(angle_yaw_rad);  
                            std::array<Vector3, 3> points { Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y - ((55) / 4 + 3.5f) / 2, 0.f), Vector3(new_point_x + ((90) / 4 + 3.5f) / 4, new_point_y, 0.f), Vector3(new_point_x - ((90) / 4 + 3.5f) / 2, new_point_y + ((55) / 4 + 3.5f) / 2, 0.f)};
                            RotateTriangle(points, angle.Y + 180.f);  
                                                    draw->AddTriangle(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), PlayerBoxClrCf, 1.5f);
       draw->AddTriangleFilled(ImVec2(points.at(0).X, points.at(0).Y), ImVec2(points.at(1).X, points.at(1).Y), ImVec2(points.at(2).X, points.at(2).Y), PlayerBoxClrCf2);


}
//================================================================================================//
        								 if (Config.ESPMenu.Distance) {
                                    ImGuiStyle &style = ImGui::GetStyle();
                                    ImVec4 savedTextColor = style.Colors[ImGuiCol_Text];
                                    style.Colors[ImGuiCol_Text] = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);
  
  
                                    std::string s;

                                    

                                    if (Config.ESPMenu.Distance) {
                                        s += (!s.empty() ? "  " : "") +
                                             std::to_string((int) Distance) + " [M]";
                                    }

                                    auto textSize = ImGui::CalcTextSize(s.c_str(), 0,
                                                                         ((float) density / 18.0f));

                                    float strokeSize = 1.5f;
                                    for (float x = -strokeSize; x <= strokeSize; x += strokeSize) {
                                        for (float y = -strokeSize;
                                             y <= strokeSize; y += strokeSize) {
                                            draw->AddText(NULL, ((float) density / 18.0f),{RootPosSC.x  - (textSize.x / 2) + x,RootPosSC.y- -20.0f + y}, IM_COL32(0, 0, 0, 255),s.c_str());
                                        }
                                    }

                                    draw->AddText(NULL, ((float) density / 18.0f),{RootPosSC.x  -(textSize.x / 2), RootPosSC.y - -20.0f }, IM_COL32(255, 255, 255, 255), s.c_str());

                                    style.Colors[ImGuiCol_Text] = savedTextColor;
                                
					     }
//================================================================================================//
if (Config.ESPMenu.Alertn) {
    if (!localController->LineOfSightTo(localController->PlayerCameraManager, headPos, true)) {
    } else {
    
      const char* text;

if (isVietnamese) {
    text = ICON_FA_EXCLAMATION_TRIANGLE " CÓ THẰNG MGU ĐANG NGẮM BẮN BẠN " ICON_FA_EXCLAMATION_TRIANGLE;
} else if (isEnglish) {
    text = ICON_FA_EXCLAMATION_TRIANGLE " ENEMY IS AIMING AT YOU " ICON_FA_EXCLAMATION_TRIANGLE;
}
bool IsVisible = localController->LineOfSightTo(Player, {0, 0, 0}, true);
ImColor PlayerColor = !IsVisible ? ImColor(255, 255, 0, 255) : ImColor(255, 0, 0, 255);
ImColor BotColor = !IsVisible ? ImColor(0, 255, 0, 255) : ImColor(255, 255, 255, 255);
ImColor SCOLOR = !Player->bEnsure ? PlayerColor : BotColor;
                        if (Config.ESPMenu.Box) {
auto localController = g_LocalController;
   float boxHeight = abs(HeadPosSC.y - RootPosSC.y);
                                float boxWidth = boxHeight * 0.50f;
                                ImVec2 vStart = {HeadPosSC.x - (boxWidth / 2),
                                HeadPosSC.y - (boxHeight * 0.05f)};
                                ImVec2 vEnd = {vStart.x + boxWidth,
                                               vStart.y + boxHeight};
      draw->AddRect(vStart, vEnd, SCOLOR, 4.0f);                          
                      }

        ImVec2 textSize = ImGui::CalcTextSize(text);
        float xPos = ((float)glWidth / 2) - (textSize.x / 2);

        timeCounter += ImGui::GetIO().DeltaTime;

        ImColor color;
        if (fmod(timeCounter, 1.0f) < 0.5f) {
            color = ImColor(247, 25, 25);
        } else {
            color = ImColor(255, 255, 0);
        }

        draw->AddText(NULL, ((float) density / 12.0f), {xPos, 160}, color, text);
    }
}
//================================================================================================//
if (Config.ESPMenu.AutoFire) {
           if (!localController->LineOfSightTo(Actor, {0, 0, 0}, true)) {
      g_LocalController->bIsPressingFireBtn = false;
      }else{
       g_LocalController->bIsPressingFireBtn = true;
       }
      }
//================================================================================================//
}
}
//================================================================================================//
if(Config.HighRisk.Crazycar){
       if (localPlayer->CurrentVehicle) {
                                    auto CurrentVehicle = localPlayer->CurrentVehicle;
                                    auto RootComponent = static_cast<UPrimitiveComponent*>(CurrentVehicle->K2_GetRootComponent());
                                    if (RootComponent) {
                                        if (localPlayer->CurrentVehicle->GetMoveForwardRate() > 0) {
                                            FVector 솓도;
                                            auto 야우 = g_LocalController->PlayerCameraManager->CameraCache.POV.Rotation.Yaw;
                                            float 세세 = 2.f * (야우 / 360.f) * M_PI;
                                            
                                            솓도.X = (130 * cosf(세세));
                                            솓도.Y = (130 * sinf(세세));
                                            
                                            RootComponent->SetAllPhysicsLinearVelocity(솓도, true);
                                        }

                                    }
                                }
                                
                            }
//================================================================================================//
if (Config.ESPMenu.Info) {
    if (Actor->IsA(ASTExtraGameStateBase::StaticClass())) {
        auto InGame = (ASTExtraGameStateBase *) Actor;
        std::string Info;
        std::string s;
        std::string devText = "Dev :- TRM";

if (isEnglish) {
    Info += "Game Information";
    s += "\nTotal Alive Players: ";
    s += std::to_string((int) InGame->AlivePlayerNum);
    s += "\nReal Players: ";
    s += std::to_string((int) InGame->PlayerNum);
    s += "\nTeam Remaining: ";
    s += std::to_string((int) InGame->AliveTeamNum);
    s += "\nMatch Time: ";
    s += std::to_string((int) InGame->ElapsedTime);
    s += "s | ";
    s += std::to_string((int) InGame->ElapsedTime / 60);
    s += "m";
} else if (isVietnamese) {
    Info += "Thông tin trò chơi";
    s += "\nTổng số người chơi còn sống: ";
    s += std::to_string((int) InGame->AlivePlayerNum);
    s += "\nNgười chơi thực: ";
    s += std::to_string((int) InGame->PlayerNum);
    s += "\nSố đội còn lại: ";
    s += std::to_string((int) InGame->AliveTeamNum);
    s += "\nThời gian trận đấu: ";
    s += std::to_string((int) InGame->ElapsedTime);
    s += "s | ";
    s += std::to_string((int) InGame->ElapsedTime / 60);
    s += "phút";
}


         
        float boxWidth = 290.0f;  
        float boxHeight = 200.0f;
        float boxPosX = 50.0f; 
        float boxPosY = 400.0f;

         
        draw->AddRectFilled(ImVec2(boxPosX, boxPosY), ImVec2(boxPosX + boxWidth, boxPosY + boxHeight), IM_COL32(10, 10, 10, 220), 12.0f);

         
        float titleX = boxPosX + (boxWidth / 2.0f) - (ImGui::CalcTextSize(Info.c_str()).x / 2.0f);
        draw->AddText(NULL, ((float) density / 25.f), ImVec2(titleX, boxPosY + 10.0f), IM_COL32(255, 255, 255, 255), Info.c_str());

         
        float lineStartX = boxPosX + 10.0f;
        float lineEndX = boxPosX + boxWidth - 10.0f;
        float lineY = boxPosY + 35.0f;  
        draw->AddLine(ImVec2(lineStartX, lineY), ImVec2(lineEndX, lineY), IM_COL32(192, 192, 192, 255), 1.0f);  

         
        draw->AddText(NULL, ((float) density / 25.f), ImVec2(boxPosX + 10.0f, boxPosY + 45.0f), IM_COL32(255, 255, 255, 255), s.c_str());

         
        float secondLineY = boxPosY + 145.0f;  
        draw->AddLine(ImVec2(lineStartX, secondLineY), ImVec2(lineEndX, secondLineY), IM_COL32(192, 192, 192, 255), 1.0f);  

         
        draw->AddText(NULL, ((float) density / 25.f), ImVec2(boxPosX + 10.0f, secondLineY + 10.0f), IM_COL32(255, 255, 255, 255), devText.c_str());
    }
}
//================================================================================================//
#include "skinxeload.cpp"
//================================================================================================//
if (Config.ESPMenu.Grenade) {
        if (Actors[i]->IsA(ASTExtraGrenadeBase::StaticClass())){
            std::string GrenadeType;
            auto Genn = (ASTExtraGrenadeBase *) Actors[i];
            if (!Genn->RootComponent)
                continue;
            float Distance = Genn->GetDistanceTo(localPlayer) / 100.f;
            if (Distance >= 60.f){
                continue;
            }
            ImColor VungNguyHiem;



            auto resa = getObjectPath(Genn);
            ImColor warncolor;
            int randomNum = (rand() % 2) + 1;
            if (randomNum == 1){
                warncolor = IM_COL32(255, 0, 0, 255);
            }
            if (randomNum == 2){
                warncolor = IM_COL32(255, 225, 0, 255);
            }

            if (Distance <= 7.9f){
                VungNguyHiem = warncolor = IM_COL32(255, 0, 0, 255);
            }
            else{
                VungNguyHiem = warncolor = IM_COL32(255, 255, 0, 255);
            }

            std::string Grenadewarning = ICON_FA_EXCLAMATION_TRIANGLE" CẨN THẬN CÓ LỰU ĐẠN ";
            Grenadewarning += ICON_FA_EXCLAMATION_TRIANGLE"";

            if(strstr(resa, "BP_Grenade_Shoulei_C")){
                GrenadeType = "Lựu Đạn Phá Mảnh";

            } else  if (strstr(resa, "BP_Grenade_Burn_C")){
                GrenadeType = "Bom Xăng";

            } else if(strstr(resa, "BP_Grenade_Smoke_C")){
                GrenadeType = "Bom Khói";
            }

            FVector2D GrenadePos;
            if (W2S(Genn->K2_GetActorLocation(), &GrenadePos)) {
                std::string s;
                s += GrenadeType;
                s += " (";
                s += std::to_string((int) Distance);
                s += ")";
                if (GrenadeType == "Lựu Đạn Phá Mảnh"){
                    Circle3D(draw, Genn->K2_GetActorLocation(), 730, VungNguyHiem, 5);
                    draw->AddText(NULL, ((float) density / 17.0f), { ((float)glWidth / 2) - (glWidth / 10), 130 }, warncolor, Grenadewarning.c_str());
                }
                if (GrenadeType == "Bom Xăng"){

                    Circle3D(draw, Genn->K2_GetActorLocation(), 390, VungNguyHiem, 5);

                    draw->AddText(NULL, ((float) density / 17.0f), { ((float)glWidth / 2) - (glWidth / 10), 130 }, warncolor, Grenadewarning.c_str());
                }
                draw->AddText(NULL, ((float) density / 20.0f), {GrenadePos.X, GrenadePos.Y}, IM_COL32(255, 255, 0, 255), s.c_str());
            }

        }

    }
//================================================================================================//
ImColor PlayerColor = ImColor(255, 0, 0, 255);
ImColor SCOLORE = PlayerColor;
                         if (Config.ESPMenu.CarHealth) {                 
                        if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
                        {
                            auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
                            if (!Vehicle->Mesh)
           continue;
                            int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->HP, (int) Vehicle->VehicleCommon->HPMax));
                            int MaxHP = (int) Vehicle->VehicleCommon->HPMax;
                            long curHP_Color = IM_COL32(std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255), std::min(((510 * CurHP) / MaxHP), 255), 0, 155);
                            float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
                            FVector2D vehiclePos;
                            if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
                            {      
           float boxWidth = density / 1.6f;
           boxWidth -= std::min(((boxWidth / 2.0f) / 00.0f) * Distance, boxWidth / 2);
           float boxHeight = boxWidth * 0.07f;
           ImVec2 vStart = {vehiclePos.X - (boxWidth / 2), vehiclePos.Y - (boxHeight * 2.1f)};
           ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP), vStart.y + boxHeight};
           ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
            draw->AddRectFilled(vStart, vEndFilled, curHP_Color);
            draw->AddRect(vStart, vEndFilled, IM_COL32(000, 000, 000, 120));
           }
//================================================================================================//
           if (Config.ESPMenu.CarHealth) {
               float boxWidth = density / 1.6f;
               boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
               float boxHeight = boxWidth * 0.07f;
               float NameboxHeight = boxWidth * 0.20f;
               ImVec2 vStart = {vehiclePos.X - (boxWidth / 2), vehiclePos.Y - (NameboxHeight * 1.73f)};
               ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + NameboxHeight};
               draw->AddRectFilled(vStart, vEndRect, IM_COL32(40, 40, 43, 180));
           }
//================================================================================================//
           if (Config.ESPMenu.Caricon) {
           float boxWidth = density / 1.8f;
           boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
           float boxHeight = boxWidth * 0.19f;
           std::string s;
           s += ICON_FA_CAR" ";       
           draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (boxWidth / 2), vehiclePos.Y - (boxHeight * 1.83f)}, SCOLORE, s.c_str());
                            }
//================================================================================================//
                      if (Config.ESPMenu.CarName) {
           float boxWidth = density / 1.8f;
           boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
           float boxHeight = boxWidth * 0.19f;
           std::string s = GetVehicleName(Vehicle);
            s += "     ";                                     
           draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X - (boxWidth / 3), vehiclePos.Y - (boxHeight * 1.83f)}, SCOLORE, s.c_str());
                            }
//================================================================================================//
                             if (Config.ESPMenu.CarDistance) {
           float boxWidth = density / 1.8f;
           boxWidth -= std::min(((boxWidth / 2) / 00.0f) * Distance, boxWidth / 2);
           float boxHeight = boxWidth * 0.19f;
           std::string s;
           s += std::to_string((int)Distance);
           s += " m";
           draw->AddText(NULL, ((float)density / 30.0f), {vehiclePos.X + (boxWidth / 3), vehiclePos.Y - (boxHeight * 1.83f)}, SCOLORE, s.c_str());
                            }
//================================================================================================//
                           }
                          }
//================================================================================================//
                            if (Config.ESPMenu.CarFuel) {                 
                        if (Actors[i]->IsA(ASTExtraVehicleBase::StaticClass()))
                        {
                            auto Vehicle = (ASTExtraVehicleBase *)Actors[i];
                            if (!Vehicle->Mesh)
           continue;
                            int CurHP = (int) std::max(0, std::min((int) Vehicle->VehicleCommon->Fuel, (int) Vehicle->VehicleCommon->FuelMax));
                            int MaxHP = (int) Vehicle->VehicleCommon->FuelMax;
                            long HPColor = IM_COL32(
                   std::min(((510 * (MaxHP - CurHP)) / MaxHP), 255),
                   std::min((510 * CurHP) / MaxHP, 0), 255, 255);

                            float Distance = Vehicle->GetDistanceTo(localPlayer) / 100.f;
                            FVector2D vehiclePos;
                            if (W2S(Vehicle->K2_GetActorLocation(), &vehiclePos))
                            {      
                            
           float boxWidth = density / 1.6f;
           boxWidth -= std::min(((boxWidth / 2.0f) / 00.0f) * Distance, boxWidth / 2);
           float boxHeight = boxWidth * 0.07f;
           ImVec2 vStart = {vehiclePos.X - (boxWidth / 2), vehiclePos.Y - (boxHeight * 1.240f)};
           ImVec2 vEndFilled = {vStart.x + (CurHP * boxWidth / MaxHP), vStart.y + boxHeight};
           ImVec2 vEndRect = {vStart.x + boxWidth, vStart.y + boxHeight};
           draw->AddRectFilled(vStart, vEndFilled, HPColor);
           draw->AddRect(vStart, vEndFilled, IM_COL32(000, 000, 000, 120));
           }      
           }
           }
//================================================================================================//
    if (Config.ESPMenu.GasCan) {
    auto objs = UObject::GetGlobalObjects();
    for (int i = 0; i < objs.Num(); i++) {
       auto Object = objs.GetByIndex(i);
    if (isObjectInvalid(Object))
       continue;
    if (Object->IsA(UVehicleCommonComponent ::StaticClass())) {
    auto playerChar = (UVehicleCommonComponent  *) Object;            
    playerChar->SetFuelMax(99999.0f,true);  
    }
}
}
//================================================================================================//
if (Actors[i]->IsA(APickUpWrapperActor::StaticClass())) {
                auto PickUp = (APickUpWrapperActor *) Actors[i];
                if (Items[PickUp->DefineID.TypeSpecificID]) {
                auto RootComponent = PickUp->RootComponent;
                if (!RootComponent)
                continue;
                float Distance = PickUp->GetDistanceTo(localPlayer) / 100.f;
                FVector2D itemPos;
                if (W2S(PickUp->K2_GetActorLocation(), &itemPos)) {
                std::string s;
                uint32_t tc = 0xFF000000;
                for (auto &category: items_data) {
                for (auto &item: category["Items"]) {
                if (item["itemId"] == PickUp->DefineID.TypeSpecificID) {
                s = item["itemName"].get<std::string>();
                tc = strtoul( item["itemTextColor"].get<std::string>().c_str(),  0, 16);
                break;}}}
                s += " - ";
                s += std::to_string((int) Distance);
                s += "m";
                if (Distance > 500) {} else {
	              if (PickUp->bHidden){} else {
                draw->AddText(NULL, ((float) density / 25.0f), {itemPos.X, itemPos.Y}, tc, s.c_str());
                }}
                }}}
//================================================================================================//
}
}

g_LocalController = localController;
g_LocalPlayer = localPlayer;

int _ScreenX = 5;
int _ScreenY = 0;
char extraa[20];
ImVec2 center = ImGui::GetMainViewport()->GetCenter();

DrawImage(glWidth / 2 - 90, 45, 180, 45, ic_clear_noob.textureId);
sprintf(extraa, " %d", totalEnemies);
ImGui::GetForegroundDrawList()->AddText(NULL ,35,{glWidth / 2 - 38,50}, ImColor(255,0,0), extraa);
sprintf(extraa, " %d", totalBots);
ImGui::GetForegroundDrawList()->AddText(NULL ,35,{glWidth / 2 - -10,50}, ImColor(0,255,0), extraa);
}
}
//================================================================================================//
std::string getClipboardText() {
if (!g_App)
return "";

auto activity = g_App->activity;
if (!activity)
return "";

auto vm = activity->vm;
if (!vm)
return "";

auto object = activity->clazz;
if (!object)
return "";

std::string result;

JNIEnv *env;
vm->AttachCurrentThread(&env, 0);
{
auto ContextClass = env->FindClass("android/content/Context");
auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

auto str = env->NewStringUTF("clipboard");
auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
env->DeleteLocalRef(str);

auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

auto text = env->CallObjectMethod(clipboardManager, getText);
if (text) {
str = (jstring) env->CallObjectMethod(text, toStringMethod);
result = env->GetStringUTFChars(str, 0);
env->DeleteLocalRef(str);
env->DeleteLocalRef(text);
}

env->DeleteLocalRef(CharSequenceClass);
env->DeleteLocalRef(ClipboardManagerClass);
env->DeleteLocalRef(clipboardManager);
env->DeleteLocalRef(ContextClass);
}
vm->DetachCurrentThread();

return result;
}
//================================================================================================//
const char *GetAndroidID(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass( StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getContentResolverMethod = env->GetMethodID(contextClass,  StrEnc("E8X\\7r7ys_Q%JS+L+~", "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C", 18).c_str(),  StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L", "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77", 35).c_str());
jclass settingSecureClass = env->FindClass( StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"", "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47", 32).c_str());
jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass,  StrEnc("e<F*J5c0Y", "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E", 9).c_str(),  StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H", "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73", 71).c_str());

auto obj = env->CallObjectMethod(context, getContentResolverMethod);
auto str = (jstring) env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj, env->NewStringUTF( StrEnc("ujHO)8OfOE", "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21", 10).c_str()));
return env->GetStringUTFChars(str, 0);
}
//================================================================================================//
const char *GetDeviceModel(JNIEnv *env) {
jclass buildClass = env->FindClass( StrEnc("m5I{GKGWBP-VOxkA", "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass,  StrEnc("|}[q:", "\x31\x32\x1F\x34\x76", 5).c_str(),  StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);
}
//================================================================================================//
const char *GetDeviceBrand(JNIEnv *env) {
jclass buildClass = env->FindClass( StrEnc("0iW=2^>0zTRB!B90", "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54", 16).c_str());
jfieldID modelId = env->GetStaticFieldID(buildClass,  StrEnc("@{[FP", "\x02\x29\x1A\x08\x14", 5).c_str(),  StrEnc(".D:C:ETZ1O-Ib&^h.Y", "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62", 18).c_str());

auto str = (jstring) env->GetStaticObjectField(buildClass, modelId);
return env->GetStringUTFChars(str, 0);
}
//================================================================================================//
std::string GetPackage() {
FILE *f = fopen("/proc/self/cmdline", "rb");
if (f) {
char *buf = new char[64];
fread(buf, sizeof(char), 64, f);
fclose(f);
return buf;
}
return 0;
}
//================================================================================================//
const char *GetPackageName(JNIEnv *env, jobject context) {
jclass contextClass = env->FindClass( StrEnc("`L+&0^[S+-:J^$,r9q92(as", "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07", 23).c_str());
jmethodID getPackageNameId = env->GetMethodID(contextClass,  StrEnc("YN4DaP)!{wRGN}", "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18", 14).c_str(),  StrEnc("VnpibEspM(b]<s#[9cQD", "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F", 20).c_str());

auto str = (jstring) env->CallObjectMethod(context, getPackageNameId);
return env->GetStringUTFChars(str, 0);
}
//================================================================================================//
const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid) {
jclass uuidClass = env->FindClass( StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C", 14).c_str());

auto len = strlen(uuid);

jbyteArray myJByteArray = env->NewByteArray(len);
env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *) uuid);

jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass,  StrEnc("P6LV|'0#A+zQmoat,", "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F", 17).c_str(),  StrEnc("sW[\"Q[W3,7@H.vT0) xB", "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79", 20).c_str());
jmethodID toStringMethod = env->GetMethodID(uuidClass,  StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(),  StrEnc("P$BMc' #j?<:myTh_*h0", "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B", 20).c_str());

auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
auto str = (jstring) env->CallObjectMethod(obj, toStringMethod);
return env->GetStringUTFChars(str, 0);
}
//================================================================================================//
struct MemoryStruct {
char *memory;
size_t size;
};
//================================================================================================//
static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp) {
size_t realsize = size * nmemb;
struct MemoryStruct *mem = (struct MemoryStruct *) userp;

mem->memory = (char *) realloc(mem->memory, mem->size + realsize + 1);
if (mem->memory == NULL) {
return 0;
}

memcpy(&(mem->memory[mem->size]), contents, realsize);
mem->size += realsize;
mem->memory[mem->size] = 0;

return realsize;
}
//================================================================================================//
int ITZ_HttpsCanay_Closed() {
	JavaVM *vm;
	jclass clazz;
    JavaVM* java_vm = vm;
    JNIEnv* java_env = NULL;

    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;

    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;

    jclass native_activity_clazz = java_env->GetObjectClass(clazz);
    if (native_activity_clazz == NULL)
        return -3;

    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, OBFUSCATE("AndroidThunkJava_RestartGame"),OBFUSCATE("()V"));
    if (method_id == NULL)
        return -4;
	
    java_env->CallVoidMethod(clazz, method_id);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
	
    return 0;
}
//================================================================================================//
bool SecherITZ(const std::string& folderPath) {
    return (access(folderPath.c_str(), F_OK) == 0);

}
//================================================================================================//
void Detected_ITZHttpCanary() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.guoshi.httpcanary");
if (SecherITZ(folderPath)) {
    ITZ_HttpsCanay_Closed(); 
	} else {
	
	}
}
//================================================================================================//
void Detected_ITZHttpCanary1() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.guoshi.httpcanary.premium");
if (SecherITZ(folderPath)) {
    ITZ_HttpsCanay_Closed();
	} else {
	
	}
}
//================================================================================================//
void Detected_ITZHttpCanary2() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.sniffer");
if (SecherITZ(folderPath)) {
    ITZ_HttpsCanay_Closed(); 
	} else {
	
	}
}
//================================================================================================//
extern "C"
JNIEXPORT jint JNICALL
JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env;
    vm->GetEnv((void **) &env, JNI_VERSION_1_6);

	Detected_ITZHttpCanary(); 

	Detected_ITZHttpCanary1(); 

	Detected_ITZHttpCanary2();

	Detected_ITZHttpCanary();

    return JNI_VERSION_1_6;
}
//================================================================================================//
 std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);
    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());
    vm->DetachCurrentThread();
    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;
CURL *curl;
    CURLcode res;
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST,  StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        std::string sRedLink = OBFUSCATE("https://free.vip-pro.site/connect");
        curl_easy_setopt(curl, CURLOPT_URL, sRedLink.c_str());
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL,  StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers,  StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[", "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F", 47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data,  StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK", "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38", 31).c_str(), user_key, UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] == true) {
                    std::string token = result[ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][ StrEnc("{>3Lr", "\x0F\x51\x58\x29\x1C", 5).c_str()].get<std::string>();
                    time_t rng = result[ StrEnc("fAVA", "\x02\x20\x22\x20", 4).c_str()][ StrEnc("+n,", "\x59\x00\x4B", 3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += StrEnc("-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{", "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E", 32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                        EXP = result["data"]["EXP"].get<std::string>();
                        status = result ["data"]["mod_status"];
                        device = result ["data"]["device"];
                        floating = result ["data"]["credit"];
                        name = result ["data"]["modname"];
                    }
                } else {
                    errMsg = result[ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D", 6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }   
    curl_easy_cleanup(curl);

    return bValid ? "OK" : errMsg;
}
//================================================================================================//
ImVec4 to_vec4(float r, float g, float b, float a)
    {
        return ImVec4(r / 255.0, g / 255.0, b / 255.0, a / 255.0);
    }
float speed = 15.0f;

static ImVec4 active = to_vec4(66, 66, 66, 255);
static ImVec4 inactive = to_vec4(66, 66, 66, 255);
//================================================================================================//
#define IM_CLAMP(V, MN, MX)     ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
namespace Settings
{
    static int Tab = 0;
}
//================================================================================================//
void clearreportkirin() {
const char* report = "/storage/emulated/0/Android/data/com.vng.pubgmobile/files/iMSDK";
            system(OBFUSCATE("rm -rf /storage/emulated/0/.backups"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Tencent"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/.sstmp"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/QTAudioEngine"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/ca-bundle.pem"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/apollo_reslist.flist"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/filelist.json"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/PufferFileList.json"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Paks/PufferFileListAddtional.json"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/UpdateInfo"));
            system(OBFUSCATE("rm -rf /storage/emulated/0/Android/data/com.vng.pubgmobile/files/UE4Game/ShadowTrackerExtra/ShadowTrackerExtra/Saved/Logs"));
            system(OBFUSCATE("rm -rf /data/data/com.vng.pubgmobile/app*"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libBugly.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libgamemaster.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libgcloudarch.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libhelpshiftlistener.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libigshare.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/liblbs.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libst-engine.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libnpps-jni.so"
                             " rm -rf /data/data/com.vng.pubgmobile/lib/libzip.so"
                             "chmod -R 755 /data/data/com.vng.pubgmobile/lib/*"
                             " rm -rf /data/data/com.vng.pubgmobile/files/ano_tmp/*"
                             "chmod -R 000 /data/data/com.vng.pubgmobile/files/ano_tmp"
                             "chmod -R 755 /data/data/com.vng.pubgmobile/lib/*.so"
                             "am start -n com.vng.pubgmobile/com.epicgames.ue4.SplashActivity"
                             "sleep 2"));
            system("adb shell am compat disable BLOCK_UNTRUSTED_TOUCHES com.vng.pubgmobile");
};
//================================================================================================//
static bool Bae = false;
EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
if (glWidth <= 0 || glHeight <= 0)
return eglSwapBuffers(dpy, surface);

if (!g_App)
return eglSwapBuffers(dpy, surface);

screenWidth = ANativeWindow_getWidth(g_App->window);
screenHeight = ANativeWindow_getHeight(g_App->window);
density = AConfiguration_getDensity(g_App->config);

if (!initImGui) {
InitTexture();
ImGui::CreateContext();
ImGuiStyle& style = ImGui::GetStyle();
style.FrameRounding = 30.0f;
style.WindowRounding = 1.0f;
style.WindowTitleAlign = ImVec2(0.5, 0.5);
style.WindowPadding = ImVec2(6, 8);
style.FramePadding = ImVec2(4, 3);
            
        style.Colors[ImGuiCol_Text] = ImColor(255, 255, 255, 255);
        style.Colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
        style.Colors[ImGuiCol_WindowBg] = ImColor(29, 34, 38, 255);
        style.Colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
        style.Colors[ImGuiCol_Border] = ImColor(0, 158, 255, 155);
        style.WindowBorderSize = 4.0f; 
        style.Colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_FrameBg] = ImColor(40, 50, 60, 255);
        style.Colors[ImGuiCol_FrameBgHovered] = ImColor(40, 50, 60, 255);
        style.Colors[ImGuiCol_FrameBgActive] = ImColor(40, 50, 60, 255);
        style.Colors[ImGuiCol_TitleBg] = ImColor(0, 0, 0, 155);
        style.Colors[ImGuiCol_TitleBgCollapsed] = ImColor(0, 0, 0, 155);
        style.Colors[ImGuiCol_TitleBgActive] = ImColor(0, 0, 0, 255); 
        style.Colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
        style.Colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
        style.Colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
        style.Colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
        style.Colors[ImGuiCol_SliderGrab] = ImVec4(0.80f, 0.80f, 0.83f, 0.31f);
        style.Colors[ImGuiCol_SliderGrabActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
        style.Colors[ImGuiCol_Button] = ImColor(51, 64, 73, 255);
        style.Colors[ImGuiCol_ButtonHovered] = ImColor(51, 64, 73, 255);
        style.Colors[ImGuiCol_ButtonActive] = ImColor(51, 64, 73, 255);
        style.Colors[ImGuiCol_Header] = ImVec4(0.10f, 0.15f, 0.19f, 0.55f);
        style.Colors[ImGuiCol_HeaderHovered] = ImVec4(0.16f, 0.19f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_HeaderActive] = ImVec4(0.16f, 0.19f, 0.15f, 1.00f);
        style.Colors[ImGuiCol_ResizeGrip] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
        style.Colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.56f, 0.56f, 0.58f, 1.00f);
        style.Colors[ImGuiCol_ResizeGripActive] = ImVec4(0.06f, 0.05f, 0.07f, 1.00f);
        style.Colors[ImGuiCol_PlotLines] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
        style.Colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_PlotHistogram] = ImVec4(0.40f, 0.39f, 0.38f, 0.63f);
        style.Colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.25f, 1.00f, 0.00f, 1.00f);
        style.Colors[ImGuiCol_TextSelectedBg] = ImVec4(0.25f, 1.00f, 0.00f, 0.43f);

style.FramePadding = ImVec2(1, 0);
style.FrameRounding = 3;
style.WindowBorderSize = 0;
style.ScrollbarRounding = 3;
style.ScrollbarSize = 20;

ImGui_ImplAndroid_Init();
ImGui_ImplOpenGL3_Init("#version 300 es");

        ImGuiIO &io = ImGui::GetIO();
        io.ConfigWindowsMoveFromTitleBarOnly = true;
        io.IniFilename = NULL;
        static const ImWchar icons_ranges[] = {0xf000, 0xf3ff, 0};
        ImFontConfig icons_config;
        icons_config.MergeMode = true;
        icons_config.PixelSnapH = true;
        icons_config.OversampleH = 2.5;
        icons_config.OversampleV = 2.5;
        ImFontConfig CustomFont;
        CustomFont.FontDataOwnedByAtlas = false;

      io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(PNH), sizeof(PNH), 24.f, NULL, io.Fonts->GetGlyphRangesVietnamese());
        
	  io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 22.0f, &icons_config, icons_ranges);   
       
                    ImFontConfig cfg;
        cfg.SizePixels = ((float) density / 20.0f);
        io.Fonts->AddFontDefault(&cfg);
        
        memset(&Config, 0, sizeof(sConfig));

Config.Loot = 100.0f;
Config.IpadS = 110;

initImGui = true;
}

ImGuiIO &io = ImGui::GetIO();

ImGui_ImplOpenGL3_NewFrame();
ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
ImGui::NewFrame();

DrawESP(ImGui::GetBackgroundDrawList(),glWidth, glHeight);

for (int i = 0; i < IM_ARRAYSIZE(io.KeysDown); i++) {
    if (ImGui::IsKeyDown(i)) {
        Bae = !Bae;
    }
}
//================================================================================================//
if (Bae){
//================================================================================================//
static bool isLogin = false;
static std::string err;
ImColor color(255, 255, 0, 255);

if (!isLogin) {
    if (ImGui::Begin(OBFUSCATE("TEAM BKG MOD LOGIN"), 0, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoBringToFrontOnFocus | ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoScrollbar)) {
        const char* currentLanguageLabel = isVietnamese ? ICON_FA_LANGUAGE "Nhấn vào đây để đổi ngôn ngữ" : ICON_FA_LANGUAGE "Click here to change language";
        
        if (ImGui::BeginCombo(" ", currentLanguageLabel)) {
            if (ImGui::Selectable("Vietnamese", isVietnamese)) {
                isVietnamese = true;
                isEnglish = false;
                currentLanguageLabel = "Vietnamese";
            }
            if (ImGui::Selectable("English", isEnglish)) {
                isVietnamese = false;
                isEnglish = true;
                currentLanguageLabel = "English";
            }
            ImGui::EndCombo();
        }
        ImGui::Text(isVietnamese ? "Vui lòng đăng nhập! (Sao chép khóa vào Clipboard hoặc kiểm tra file key.txt)" 
                                 : "Please Login! (Copy Key to Clipboard or Check key.txt File)");

        ImGui::PushItemWidth(-1);
        static char s[64] = "";

        if (strlen(s) == 0) {
            std::ifstream inputFile("/storage/emulated/0/Android/data/com.vng.pubgmobile/key.txt");
            if (inputFile.is_open()) {
                std::string fileContent((std::istreambuf_iterator<char>(inputFile)),
                                        (std::istreambuf_iterator<char>()));
                inputFile.close();
                if (!fileContent.empty()) {
                    strncpy(s, fileContent.c_str(), sizeof(s));
                }
            }

            if (strlen(s) > 0) {
                err = Login(s);
                if (err == "OK") {
                    isLogin = bValid && g_Auth == g_Token;
                }
            }
        }

        ImGui::InputText(isVietnamese ? "##khóa" : "##key", s, sizeof(s));
        
        if (ImGui::Button(isVietnamese ? " Dán Khóa  " : " Paste Key  ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
            auto key = getClipboardText();
            if (!key.empty()) {
                strncpy(s, key.c_str(), sizeof(s));
            }
        }

        if (ImGui::Button(isVietnamese ? "Đăng nhập" : "Login", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
            std::ofstream outputFile("/storage/emulated/0/Android/data/com.vng.pubgmobile/key.txt");
            if (outputFile.is_open()) {
                outputFile << s;
                outputFile.close();
            }
            std::ifstream inputFile("/storage/emulated/0/Android/data/com.vng.pubgmobile/key.txt");
            if (inputFile.is_open()) {
                std::string fileContent((std::istreambuf_iterator<char>(inputFile)),
                                        (std::istreambuf_iterator<char>()));
                inputFile.close();
                if (!fileContent.empty()) {
                    strncpy(s, fileContent.c_str(), sizeof(s));
                }
            }
            err = Login(s);
            if (err == "OK") {
                isLogin = bValid && g_Auth == g_Token;
            }
        }

        if (ImGui::Button(isVietnamese ? " Lấy Key Miễn Phí  " : " Get Key Free  ", ImVec2(ImGui::GetContentRegionAvailWidth(), 0))) {
        }

        ImGui::Text(isVietnamese ? "Cách 1: Dán file key.txt trong Android/data/com.vng.pubgmobile" 
                                 : "Method 1: Paste the key.txt file in Android/data/com.vng.pubgmobile");
        ImGui::Text(isVietnamese ? "Cách 2: Sao chép key sau đó vào game Dán Khóa -> Đăng Nhập" 
                                 : "Method 2: Copy the key, then paste it in-game -> Login");
    }
}
//================================================================================================//
else {
if (!g_Token.empty() && !g_Auth.empty() && g_Token == g_Auth) {//ATCR
//================================================================================================//
ImGui::SetNextWindowSize(ImVec2(830,620));
ImGui::SetNextWindowPos(ImVec2((float) glWidth / 1.98 - 400, 45.0f), ImGuiCond_Once);
if (ImGui::Begin(OBFUSCATE(" "), nullptr, ImGuiWindowFlags_NoSavedSettings || ImGuiWindowFlags_NoTitleBar)) {
ImGui::Separator();
    float currentTime = ImGui::GetTime();
    int phase = (int)(currentTime / 2.0f) % 3;

    ImU32 color1 = IM_COL32(255, 0, 0, 255);
    ImU32 color2 = IM_COL32(255, 255, 0, 255);
    ImU32 color3 = IM_COL32(0, 255, 0, 255);

    if (phase == 0 && ((int)(currentTime * 10) % 2 == 0))
        color1 = IM_COL32(255, 0, 0, 150);
    else if (phase == 1 && ((int)(currentTime * 10) % 2 == 0))
        color2 = IM_COL32(255, 255, 0, 150);
    else if (phase == 2 && ((int)(currentTime * 10) % 2 == 0))
        color3 = IM_COL32(0, 255, 0, 150);

    ImGui::PushStyleColor(ImGuiCol_Text, color1);
    ImGui::Text(ICON_FA_CIRCLE);
    ImGui::PopStyleColor();

    ImGui::SameLine(0.0f, 0.0f);

    ImGui::PushStyleColor(ImGuiCol_Text, color2);
    ImGui::Text(ICON_FA_CIRCLE);
    ImGui::PopStyleColor();

    ImGui::SameLine(0.0f, 0.0f);

    ImGui::PushStyleColor(ImGuiCol_Text, color3);
    ImGui::Text(ICON_FA_CIRCLE);
    ImGui::PopStyleColor();

ImGui::SameLine(); 
PNHText(XorStr("                      TEAM BKG MOD                   "), ImColor(255, 215, 444));
ImGui::Spacing();
ImGui::Separator();
static float buttonPosX = 0.0f;
static int currentButtonIndex = 0;
float windowWidth = ImGui::GetContentRegionAvail().x;

const char* buttonTexts[] = {
    ICON_FA_BULLHORN " NEWS! HACK PUBG 64BIT VNG UPDATE 4/3/2025",
    isVietnamese ? ICON_FA_BULLHORN " ESP + AIMBOT SIÊU MƯỢT" : ICON_FA_BULLHORN " ESP + AIMBOT SUPER SMOOTH",
    isVietnamese ? ICON_FA_BULLHORN " MEMORY + MOD DATA SIÊU CHÁY" : ICON_FA_BULLHORN " MEMORY + MOD DATA SUPER HOT",
    isVietnamese ? ICON_FA_BULLHORN " MOD SKIN SIÊU ĐẸP FULL HIỆU ỨNG" : ICON_FA_BULLHORN " MOD SKIN SUPER BEAUTIFUL WITH FULL EFFECTS"
};

float buttonWidth = ImGui::CalcTextSize(buttonTexts[currentButtonIndex]).x + ImGui::GetStyle().FramePadding.x * 2.0f;

buttonPosX += ImGui::GetIO().DeltaTime * 100.0f;
if (buttonPosX > windowWidth) {
    buttonPosX = -buttonWidth;
    currentButtonIndex = (currentButtonIndex + 1) % 4;
}

ImGui::SetCursorPosX(buttonPosX);

ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.0f, 0.47f, 0.75f, 1.0f));
ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.0f, 0.55f, 0.85f, 1.0f));
ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.0f, 0.35f, 0.65f, 1.0f));
ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));

if (ImGui::Button(buttonTexts[currentButtonIndex])) {}

ImGui::PopStyleColor(4);
ImGui::Spacing();
ImGui::Separator();
//================================================================================================//
        startTime = std::time(nullptr);
    double elapsedSeconds = std::difftime(currentTime, startTime);

    int hours = static_cast<int>(elapsedSeconds / 3600);
    int minutes = static_cast<int>((elapsedSeconds / 60)) % 60;
    int seconds = static_cast<int>(elapsedSeconds) % 60;

time_t lt;
struct tm *t_m;
lt = time(NULL);
t_m = localtime(&lt);

int time_h = t_m->tm_hour;
int time_m = t_m->tm_min;
int time_s = t_m->tm_sec;

int day = t_m->tm_mday;
int month = t_m->tm_mon + 1;
int year = t_m->tm_year + 1900;

std::string time;

if (time_h < 10)
    time += "0";

time += std::to_string(time_h) + ":";

if (time_m < 10)
    time += "0";

time += std::to_string(time_m) + ":";

if (time_s < 10)
    time += "0";

time += std::to_string(time_s);

std::string date = std::to_string(day) + "-" + std::to_string(month) + "-" + std::to_string(year);

std::string dayOfWeek;
if (isVietnamese) {
    switch (t_m->tm_wday) {
        case 0:
            dayOfWeek = " Chủ Nhật ";
            break;
        case 1:
            dayOfWeek = " Thứ Hai ";
            break;
        case 2:
            dayOfWeek = " Thứ Ba ";
            break;
        case 3:
            dayOfWeek = " Thứ Tư ";
            break;
        case 4:
            dayOfWeek = " Thứ Năm ";
            break;
        case 5:
            dayOfWeek = " Thứ Sáu ";
            break;
        case 6:
            dayOfWeek = " Thứ Bảy ";
            break;
    }
} else if (isEnglish) {
    switch (t_m->tm_wday) {
        case 0:
            dayOfWeek = " Sunday ";
            break;
        case 1:
            dayOfWeek = " Monday ";
            break;
        case 2:
            dayOfWeek = " Tuesday ";
            break;
        case 3:
            dayOfWeek = " Wednesday ";
            break;
        case 4:
            dayOfWeek = " Thursday ";
            break;
        case 5:
            dayOfWeek = " Friday ";
            break;
        case 6:
            dayOfWeek = " Saturday ";
            break;
    }
}
    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 255, 0, 255));
    std::string dateTime = std::string(ICON_FA_CALENDAR) + " " + dayOfWeek + " |  " + date + " |  " + time + " " + ICON_FA_CALENDAR;
    ImVec2 textSize = ImGui::CalcTextSize(dateTime.c_str());
    float availableWidth = ImGui::GetContentRegionAvail().x;
    ImGui::SetCursorPosX((availableWidth - textSize.x) * 0.5f);
    ImGui::Text(dateTime.c_str());
    ImGui::PopStyleColor();
//================================================================================================//
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
    ImGui::BeginGroupPanel(isVietnamese ? "Thông Tin" : "Info", ImVec2(0.0f, 0.0f));
    ImGui::PopStyleColor();

static char password[64] = "";
static char displayText[128] = "Key : ";

std::ifstream inputFile(filePath);

if (inputFile.is_open())
{
    inputFile.getline(password, IM_ARRAYSIZE(password));
    inputFile.close();
}
else
{
    strcpy(password, "");
}

if (strlen(password) == 0)
{
    if (isVietnamese) {
    strcpy(displayText, "Key : Không tìm thấy file key.txt");
} else {
    strcpy(displayText, "Key : No File key.txt");
}

}
else
{
    strcpy(displayText, "Key : ");
    strcat(displayText, password);
}

float inputWidth = ImGui::CalcTextSize(displayText).x + 20.0f;



ImGui::SetNextItemWidth(inputWidth);
ImGui::InputText("", displayText, IM_ARRAYSIZE(displayText));
    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(173, 216, 230, 255));
    ImGui::Text(isVietnamese ? "Hết Key Vào Lúc : %s" : "Key Expires At : %s", EXP.c_str());
    getDeviceName(deviceName);
    ImGui::Text(isVietnamese ? "Thiết Bị Đang Sử Dụng : %s" : "Current Device : %s", deviceName);
    getDeviceNamen(deviceNamen);
    ImGui::Text(isVietnamese ? "ID Thiết Bị : %s" : "ID Device : %s", deviceNamen);
    getDeviceNamenn(deviceNamenn);
    ImGui::Text(isVietnamese ? "Android Version : %s" : "Android Version : %s", deviceNamenn);
    ImGui::PopStyleColor();
    ImGui::EndGroupPanel();
//================================================================================================//
ImGui::SameLine();
ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
ImGui::BeginGroupPanel(isVietnamese ? "Vui Lòng Chọn...?" : "Please Select...?", ImVec2(0.0f, 0.0f));
ImGui::PopStyleColor();
//================================================================================================//
/*static double popupOpenedTime = 0.0;
static bool hasShownWarning = false;
if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Vô Game" : "Start Game", &ngmoi)) {
    if (ngmoi) {
        ngcu = false; 
        decry = false;
        showSteps = true;
        isFightingGame = true;
        logTimeToFile();
        
        if (!hasShownWarning) {
            ImGui::OpenPopup("LƯU Ý");
            popupOpenedTime = ImGui::GetTime();
            hasShownWarning = true;
        }
    } else if (!ngcu) {
        ngmoi = true;
    }
}

if (ImGui::BeginPopupModal("LƯU Ý", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
    ImGui::Text(" </> Khi chơi cảm thấy lag hoặc văng vui lòng làm theo các bước sau : ");
    ImGui::Text(" B1 : Xoá bộ nhớ đệm và bật 1.1.1.1 trước khi vào game ( Nếu Bị Crash Liên Tục ) ");
    ImGui::Text(" B2 : Giảm bớt chức năng ESP ");
    ImGui::Text(" B3 : Bỏ chọn chức năng 90 FPS + 120 FPS + 144 FPS và Tâm + ");
    ImGui::Text(" </> Một số chức năng chưa ổn định và cần đợi cập nhật : MOD SKIN, GAME TURBO, MOD DATA ");
    ImGui::Text(" Cảm ơn bạn trải nghiệm bản hack của TEAM BKG MOD ");
    if (ImGui::GetTime() - popupOpenedTime >= 5.0f) {
        if (ImGui::Button("Chấp nhận")) {
            ImGui::CloseCurrentPopup();
        }
    }

    ImGui::EndPopup();
}*/
static double popupOpenedTime = 0.0;
static bool hasShownWarning = false;
static bool showSuccess = false;
static bool bypassActivated = false; 
static auto successStartTime = std::chrono::steady_clock::now();

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Vô Game" : "Start Game", &ngmoi)) {
    if (ngmoi) {
        ngcu = false; 
        decry = false;
        showSteps = true;
        isFightingGame = true;
        logTimeToFile();

        if (!hasShownWarning) {
            ImGui::OpenPopup("LƯU Ý");
            popupOpenedTime = ImGui::GetTime();
            hasShownWarning = true;
        } else {
           
            showSuccess = true;
            successStartTime = std::chrono::steady_clock::now();
        }
    } else if (!ngcu) {
        ngmoi = true;
    }
}


if (ImGui::BeginPopupModal("LƯU Ý", NULL, ImGuiWindowFlags_AlwaysAutoResize)) {
    ImGui::Text(" </> Khi chơi cảm thấy lag hoặc văng vui lòng làm theo các bước sau : ");
    ImGui::Text(" B1 : Xoá bộ nhớ đệm và bật 1.1.1.1 trước khi vào game ( Nếu Bị Crash Liên Tục ) ");
    ImGui::Text(" B2 : Giảm bớt chức năng ESP ");
    ImGui::Text(" B3 : Bỏ chọn chức năng 90 FPS + 120 FPS + 144 FPS và Tâm + ");
    ImGui::Text(" </> Một số chức năng chưa ổn định và cần đợi cập nhật : MOD SKIN, GAME TURBO, MOD DATA ");
    ImGui::Text(" Cảm ơn bạn trải nghiệm bản hack của TEAM BKG MOD ");

    if (ImGui::GetTime() - popupOpenedTime >= 5.0f || ImGui::Button("Chấp nhận")) {
        ImGui::CloseCurrentPopup();
        if (!bypassActivated) {
            showSuccess = true;
            successStartTime = std::chrono::steady_clock::now();
            bypassActivated = true; 
        }
    }

    ImGui::EndPopup();
}


if (showSuccess) {
    auto now = std::chrono::steady_clock::now();
    if (std::chrono::duration_cast<std::chrono::seconds>(now - successStartTime).count() < 3) {
        ImGui::SetNextWindowBgAlpha(0.75f);
        ImGui::SetNextWindowSize(ImVec2(250, 80), ImGuiCond_Always);
        ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x - 270, ImGui::GetIO().DisplaySize.y - 120), ImGuiCond_Always);

        ImGui::Begin("Success", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
        ImGui::TextColored(ImVec4(0, 1, 0, 1), "%s  Success", ICON_FA_CIRCLE);
        ImGui::Spacing();
        ImGui::Separator();
        ImGui::Text("Đã Vào Game -> Bypass Đã Bật");
        ImGui::End();
    } else {
        showSuccess = false;
    }
}
//================================================================================================//
if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Dừng Game" : "Stop Game", &ngcu)) {
    if (ngcu) {
        ngmoi = false; 
        decry = true;
        showSteps = false;
        isFightingGame = false;
    } else if (!ngmoi) {
       
        ngcu = true;
    }
}
//================================================================================================//
static bool isRooted = checkRootFile();

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("Root", &isRooted)) {
    if (isRooted) {
            int result = system("su -c 'echo root > /storage/emulated/0/Android/data/com.vng.pubgmobile/root.txt'");
            if (result == 0) {
                showSuccessPopup = true;
                successStartTime = std::chrono::steady_clock::now(); 
            } else {
                isRooted = false;
            }
        } else {
            remove("/storage/emulated/0/Android/data/com.vng.pubgmobile/root.txt");
        }
    }

    
    if (showSuccessPopup) {
        auto now = std::chrono::steady_clock::now();
        if (std::chrono::duration_cast<std::chrono::seconds>(now - successStartTime).count() >= 3) {
            showSuccessPopup = false;
        } else {
            
            ImGui::SetNextWindowBgAlpha(0.75f);
            ImGui::SetNextWindowSize(ImVec2(220, 80), ImGuiCond_Always);
            ImGui::SetNextWindowPos(ImVec2(ImGui::GetIO().DisplaySize.x - 250, ImGui::GetIO().DisplaySize.y - 100), ImGuiCond_Always);

            ImGui::Begin("Success", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
            ImGui::TextColored(ImVec4(0, 1, 0, 1), "%s  Success", ICON_FA_CIRCLE);
            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Text("Máy Bạn Đã Root");
            ImGui::End();
        }
    }
//================================================================================================//
if (ImGui::Button(isVietnamese ? "Xoá bộ nhớ Cache" : "Delete Cache")) {
    Cache;
}
//================================================================================================//
ImVec4 color = decry ? ImVec4(1.0f, 0.0f, 0.0f, 1.0f) : ImVec4(0.0f, 1.0f, 0.0f, 1.0f);
ImGui::PushStyleColor(ImGuiCol_Text, color);
ImGui::Text(isVietnamese ? (decry ? "GAME ĐANG DỪNG" : "GAME ĐANG HOẠT ĐỘNG") : (decry ? "GAME IS PAUSED" : "GAME IS RUNNING"));
ImGui::PopStyleColor();
ImGui::EndGroupPanel();
//================================================================================================//
int level = 0;
ImGui::SameLine();
ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.0f, 1.0f, 0.0f, 1.0f));
ImGui::BeginGroupPanel(isVietnamese ? "Thông Tin Acc Người Chơi" : "Acc Player Information", ImVec2(0.0f, 0.0f));
ImGui::PopStyleColor();
ImGui::Text(isVietnamese ? "Tên Nhân Vật: %s" : "Character Name: %s", characterName);
ImGui::Text(isVietnamese ? "Cấp Nhân Vật: %s" : "Level: %s", "(null)");
ImGui::Text(isVietnamese ? "Rank: %s" : "Rank: %s", rank);
ImGui::Text(isVietnamese ? "Số Phiếu Bị Tố Cáo: %s" : "Accused Ballot: %s", "(null)");
ImGui::Text(isVietnamese ? "Độ An Toàn Của Acc: %s" : "Account Safety: %s", "(null)");
ImGui::EndGroupPanel();
//================================================================================================//
    static int ActiveTab = 1;
	{
	
        if (ImGui::BeginTable("split", 3)) {
ImGui::TableNextColumn();
if (ImGui::Button(isVietnamese ? ICON_FA_EYE " Esp " : ICON_FA_EYE " Esp ", ImVec2(188, 50)))
    ActiveTab = 1;

ImGui::TableNextColumn();
if (ImGui::Button(isVietnamese ? ICON_FA_FIRE " Vật Phẩm " : ICON_FA_FIRE " Item ", ImVec2(188, 50)))
    ActiveTab = 2;

ImGui::TableNextColumn();
if (ImGui::Button(isVietnamese ? ICON_FA_EYE_DROPPER " Memory " : ICON_FA_EYE_DROPPER " Memory ", ImVec2(188, 50)))
    ActiveTab = 3;

ImGui::TableNextColumn();
if (ImGui::Button(isVietnamese ? ICON_FA_ROCKET " Aim Bot " : ICON_FA_ROCKET " Aim Bot ", ImVec2(188, 50)))
    ActiveTab = 4;

ImGui::TableNextColumn();
if (ImGui::Button(isVietnamese ? ICON_FA_USER_CIRCLE " Mod Skin " : ICON_FA_USER_CIRCLE " Mod Skin ", ImVec2(188, 50)))
    ActiveTab = 5;

ImGui::TableNextColumn();
if (ImGui::Button(isVietnamese ? ICON_FA_WRENCH " Công Cụ " : ICON_FA_WRENCH " Tools ", ImVec2(188, 50)))
    ActiveTab = 6;

	ImGui::EndTable();
}}
//================================================================================================//
ImGui::Spacing();
ImGui::Separator();
static int onlineHackers = 0;
static double lastUpdate = 0;

if (ImGui::GetTime() - lastUpdate >= 60.0) { 
    onlineHackers = std::rand() % 201; 
    lastUpdate = ImGui::GetTime();
}

ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), "%s %s: %d", ICON_FA_USER_CIRCLE, 
                   isVietnamese ? "Số Người Chơi Hack Online" : "Hackers Online", 
                   onlineHackers);
ImGui::Spacing();
ImGui::Separator();
//================================================================================================//
ImGui::Spacing();
ImGui::Separator();
const char* currentLanguageLabel = isVietnamese ? ICON_FA_LANGUAGE "Nhấn vào đây để đổi ngôn ngữ" : ICON_FA_LANGUAGE "Click here to change language";
if (ImGui::BeginCombo(" ", currentLanguageLabel)) {
    if (ImGui::Selectable("Vietnamese", isVietnamese)) {
        isVietnamese = true;
        isEnglish = false;
    
        currentLanguageLabel = "Vietnamese";
    }
    if (ImGui::Selectable("English", isEnglish)) {
        isVietnamese = false;
        isEnglish = true;
     
        currentLanguageLabel = "English";
    }
    ImGui::EndCombo();
}
//================================================================================================//
        if (ActiveTab == 1) {//xong
            ImGui::Spacing();
            ImGui::Separator();
            ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
ImGui::SameLine();
ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), isVietnamese ? "AN TOÀN" : "SAFE");
            ImGui::Spacing();
            ImGui::Separator();
    ImVec4 accentColor = ImVec4(0.2f, 0.8f, 1.0f, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, accentColor);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
            if (ImGui::Button(isVietnamese ? "Chọn Tất Cả" : "Select All", { 205, 40 })) {
                Config.ESPMenu.Line = true;
                Config.ESPMenu.Box = true;
                Config.ESPMenu.NghienNgap = true;
                Config.ESPMenu.Weapon = true;
                Config.ESPMenu.Alertn = true;
                Config.ESPMenu.Distance = true;
                Config.ESPMenu.Alert = true;
                Config.ESPMenu.Name = true;
                Config.ESPMenu.TeamID = true;
                Config.ESPMenu.Health = true;
                Config.ESPMenu.Info = true;
                Config.ESPMenu.Grenade = true;
                Config.ESPMenu.CarHealth = true;
                Config.ESPMenu.CarName = true;
                Config.ESPMenu.CarDistance = true;
                Config.ESPMenu.Caricon = true;
                Config.ESPMenu.CarFuel = true;
              
            }

            ImGui::SameLine();

            if (ImGui::Button(isVietnamese ? "Tắt Tất Cả" : "Disable All", { 205, 40 })) {
                Config.ESPMenu.Line = false;
                Config.ESPMenu.Box = false;
                Config.ESPMenu.NghienNgap = false;
                Config.ESPMenu.Weapon = false;
                Config.ESPMenu.Alertn = false;
                Config.ESPMenu.Distance = false;
                Config.ESPMenu.Alert = false;
                Config.ESPMenu.Name = false;
                Config.ESPMenu.TeamID = false;
                Config.ESPMenu.Health = false;
                Config.ESPMenu.Info = false;
                Config.ESPMenu.Grenade = false;
                Config.ESPMenu.CarHealth = false;
                Config.ESPMenu.CarName = false;
                Config.ESPMenu.CarDistance = false;
                Config.ESPMenu.Caricon = false;
                Config.ESPMenu.CarFuel = false;
           
            }
ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Hiện Người" : "Show Player", &ng);
if (ng) {
    bot = false;
    ngvbot = false;
}

ImGui::SameLine();

ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Hiện Bot" : "Show Bot", &bot);
if (bot) {
    ng = false;
    ngvbot = false;
}

ImGui::SameLine();

ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Hiện Cả Hai" : "Show Both", &ngvbot);
if (ngvbot) {
    ng = false;
    bot = false;
}
            if (ImGui::BeginTable("split", 3)) {
                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##LineCheckbox", &Config.ESPMenu.Line);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_LONG_ARROW_DOWN "    Đường Kẻ " : ICON_FA_LONG_ARROW_DOWN "    Line ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##BoxCheckbox", &Config.ESPMenu.Box);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_CUBE "    Hộp 3D " : ICON_FA_CUBE "    3D Box ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##BoneCheckbox", &Config.ESPMenu.NghienNgap);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_CHILD "    Xương " : ICON_FA_CHILD "    Skeleton ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##WeaponCheckbox", &Config.ESPMenu.Weapon);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_ROCKET "    Súng Địch " : ICON_FA_ROCKET "    Enemy Gun ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##AlertCheckbox", &Config.ESPMenu.Alertn);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_EXCLAMATION_TRIANGLE "    Cảnh Báo Địch " : ICON_FA_EXCLAMATION_TRIANGLE "    Enemy Alert ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##DistanceCheckbox", &Config.ESPMenu.Distance);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_ARROWS_H "    Khoảng Cách " : ICON_FA_ARROWS_H "    Distance ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##Alert180Checkbox", &Config.ESPMenu.Alert);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_EXCLAMATION_TRIANGLE "    Cảnh Báo 180 " : ICON_FA_EXCLAMATION_TRIANGLE "    180 Alert ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##NameCheckbox", &Config.ESPMenu.Name);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_ADDRESS_CARD "    Tên " : ICON_FA_ADDRESS_CARD "    Name ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##TeamIDCheckbox", &Config.ESPMenu.TeamID);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_MEDKIT "    ID Đội " : ICON_FA_MEDKIT "    Team ID ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##HealthCheckbox", &Config.ESPMenu.Health);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_CUBE "    Máu " : ICON_FA_CUBE "    Health ");
                
                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##InfoCheckbox", &Config.ESPMenu.Info);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_EXCLAMATION_CIRCLE "    Thông Tin Trận " : ICON_FA_EXCLAMATION_CIRCLE "    Info ");

                ImGui::TableNextColumn();
                ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕("##GrenadeCheckbox", &Config.ESPMenu.Grenade);
                ImGui::SameLine();
                ImGui::Text(isVietnamese ? ICON_FA_BOMB "    Hiện Bom " : ICON_FA_BOMB "    Bomb ");
                ImGui::EndTable();

            }

                ImGui::BeginGroupPanel(isVietnamese ? ICON_FA_CAR "  Xe" : "  Car", ImVec2(0.0f, 0.0f));
                

                        ImGui::TableNextColumn();
                        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Máu xe " : "Car Health", &Config.ESPMenu.CarHealth);

                        ImGui::SameLine();
                        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Tên xe " : "Car Name", &Config.ESPMenu.CarName);

                        ImGui::SameLine();
                        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Vị trí xe " : "Car Distance", &Config.ESPMenu.CarDistance);

                        ImGui::SameLine();
                        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Biểu tượng xe " : "Car Icon", &Config.ESPMenu.Caricon);

                        ImGui::SameLine();
                        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xăng xe" : "Car Fuel", &Config.ESPMenu.CarFuel);

                
            ImGui::EndGroupPanel();
            if (ImGui::BeginTable("##MatchInfo", 6, ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersInner)) {
                ImGui::TableSetupColumn(isVietnamese ? "Tên" : "Name", 0, 150);
                ImGui::TableSetupColumn(isVietnamese ? "Quốc gia" : "Nation", 0, 160);
                ImGui::TableSetupColumn(isVietnamese ? "Mã người chơi" : "Player ID", 0, 170);
                ImGui::TableSetupColumn(isVietnamese ? "Sao chép" : "Copy", 0, 100);  
                ImGui::TableSetupColumn(isVietnamese ? "Mã đội" : "TeamID", 0, 80);
                ImGui::TableSetupColumn(isVietnamese ? "Vũ khí" : "Weapon", 0, 130);
                ImGui::TableHeadersRow();

                int numPlayers = std::min(static_cast<int>(sizeof(RoomInfo.PlayerB) / sizeof(RoomInfo.PlayerB[0])), 20);
                for (int row = 0; row < numPlayers; row++) {
                    if (RoomInfo.PlayerB[row].IsDead) {
                        continue;
                    }
                    if (RoomInfo.PlayerB[row].Distance > 200.0f) {
                        continue;
                    }

                    ImGui::TableNextRow();
                    for (int column = 0; column < 6; column++) {
                        ImGui::TableSetColumnIndex(column);
                        char buf[64];

                        switch (column) {
                            case 0:
                                sprintf(buf, "%s", RoomInfo.PlayerB[row].Name.c_str());
                                ImGui::TextUnformatted(buf);
                                break;
                            case 1:
                                sprintf(buf, "%s", RoomInfo.PlayerB[row].Nation.c_str());
                                ImGui::TextUnformatted(buf);
                                break;
                            case 2:
                                sprintf(buf, "%s", RoomInfo.PlayerB[row].ID.c_str());
                                ImGui::TextUnformatted(buf);
                                break;
                            case 3:
                                ImGui::PushID(row);
                                if (ImGui::Button(isVietnamese ? "Sao chép" : "Copy")) {
                                    const char* playerID = RoomInfo.PlayerB[row].ID.c_str();
                                    copyTextToClipboard(playerID);
                                }
                                ImGui::PopID();
                                break;
                            case 4:
                                sprintf(buf, "%s", RoomInfo.PlayerB[row].TeamID.c_str());
                                ImGui::TextUnformatted(buf);
                                break;
                            case 5:
                                sprintf(buf, "%s", RoomInfo.PlayerB[row].Weapon.c_str());
                                ImGui::TextUnformatted(buf);
                                break;
                        }
                    }
                }
                ImGui::EndTable();
            }
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(2);
        }
//================================================================================================//
    if (ActiveTab == 2) {//xong
    ImGui::Spacing();
            ImGui::Separator();
            ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
ImGui::SameLine();
ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), isVietnamese ? "AN TOÀN" : "SAFE");
        ImGui::Spacing();
        ImGui::Separator();


    ImVec4 accentColor = ImVec4(0.2f, 0.8f, 1.0f, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, accentColor);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
        for (auto &i : items_data) {

            if (ImGui::TreeNode(i["Category"].get<std::string>().c_str())) {
                ImGui::Spacing();


                for (auto &item : i["Items"]) {
                    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(item["itemName"].get<std::string>().c_str(),
                                   (bool *) &Items[item["itemId"].get<int>()]);
                }

                ImGui::TreePop();
            }
        }

    ImGui::PopStyleColor();
    ImGui::PopStyleVar(2);
    }
//================================================================================================//
if (ActiveTab == 3) {//xong
ImGui::Spacing();
ImGui::Separator();
            ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
ImGui::SameLine();
ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), isVietnamese ? "AN TOÀN" : "SAFE");
ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), 
                   isVietnamese ? "Lưu Ý : Những chức năng có (!) có thể nguy hiểm gây ban acc !!!" 
                                : "Note: These functions (!) can be dangerous and cause account ban. !!!");
    ImGui::Spacing();
    ImGui::Separator();
    ImVec4 accentColor = ImVec4(0.2f, 0.8f, 1.0f, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, accentColor);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));

    if (isVietnamese || isEnglish) { 
    ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(51, 204, 255, 255));
    ImGui::BeginGroupPanel("FPS", ImVec2(0.0f, 0.0f));
}
ImGui::PopStyleColor();
    static int fpsSelection = 0;
    static bool selectAllFeaturesT = false;


    if (isVietnamese) {
        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(51, 204, 255, 255));
        ImGui::Text("Lựa chọn FPS:");
    } else if (isEnglish) {
        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(51, 204, 255, 255));
        ImGui::Text("FPS Selection:");
    }

    ImGui::SameLine();
    if (ImGui::RadioButton("90 FPS", fpsSelection == 90)) {
        fpsSelection = 90;
        Config.HighRisk.Unlock1 = true;
        Config.HighRisk.Unlock2 = false;
        Config.HighRisk.Unlock3 = false;
    }
    ImGui::SameLine();
    if (ImGui::RadioButton("120 FPS", fpsSelection == 120)) {
        fpsSelection = 120;
        Config.HighRisk.Unlock1 = false;
        Config.HighRisk.Unlock2 = true;
        Config.HighRisk.Unlock3 = false;
    }
    ImGui::SameLine();
    if (ImGui::RadioButton("144 FPS", fpsSelection == 144)) {
        fpsSelection = 144;
        Config.HighRisk.Unlock1 = false;
        Config.HighRisk.Unlock2 = false;
        Config.HighRisk.Unlock3 = true;
    }
    ImGui::SameLine();
    if (ImGui::Button(isVietnamese ? "Bỏ Chọn FPS" : "Unchecked FPS")) {
        selectAllFeaturesT = !selectAllFeaturesT;
        if (selectAllFeaturesT) {
            fpsSelection = 0;
            Config.HighRisk.Unlock1 = false;
            Config.HighRisk.Unlock2 = false;
            Config.HighRisk.Unlock3 = false;
        }
    }
    ImGui::Text(isVietnamese ? "Lựa chọn FPS đã cập nhật: %d FPS" : "Current FPS Selection: %d FPS", fpsSelection);
    ImGui::EndGroupPanel();


    if (ImGui::BeginTable("split", 3)) {

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Góc Rộng" : "Ipad View", &WideView);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Giảm Giật" : "Recoil", &Config.HighRisk.Recoil);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Tâm +" : "Cross", &Config.HighRisk.Cross);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Hiệu Ứng X" : "X Effect", &Config.HighRisk.HitEffect);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Không Rung Tâm (!)" : "No Shake Aim (!)", &Config.HighRisk.Shake);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xoay Người 360°" : "Turn 360°", &Config.Rock);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Nạp Đầy Xăng (!)" : "Gas Can (!)", &Config.ESPMenu.GasCan);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Tự Động Bắn (!)" : "Auto Fire (!)", &Config.ESPMenu.AutoFire);
        
        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Damage Ảo (!)" : "Damage Virtual (!)", &Config.HighRisk.Damage);

        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Chạy Xe Nhanh (!)" : "Speed Car (!)", &Config.HighRisk.Crazycar);

        ImGui::EndTable();
    }

ImGui::Spacing();
ImGui::Separator();
const char* shrinkCharacterText = isVietnamese ? "Thu Nhỏ Nhân Vật" : "Shrink Character";
const char* adjustSizeText = isVietnamese ? "Điều Chỉnh Kích Thước" : "Adjust Size";
ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(shrinkCharacterText, &Test);
ImGui::SliderFloat(adjustSizeText, &X1, 0.0f, 2.0f);
const char* label = isVietnamese ? "Ipad View Gốc Nhìn Thứ 1" : "Ipad View First-Person";
ImGui::SliderFloat(label, &X2, 0.0f, 170.0f);
ImGui::Spacing();
ImGui::Separator();
ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), 
    isVietnamese ? "BẬT ROOT ĐỂ SỬ DỤNG TÍNH NĂNG NÀY" : "ENABLE ROOT TO USE THIS FEATURE");
ImGui::BeginGroupPanel(isVietnamese ? "Mod Obb" : "OBB Modding", ImVec2(0.0f, 0.0f));
if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Obb Mod" : "Modded OBB", &obbMod)) {
    if (obbMod) {
        obbGoc = false;
        system(("su -c 'rm -rf " + std::string(pubgObbPath) + " && cp " + std::string(modObbPath) + " " + std::string(pubgObbPath) + "'").c_str()); 
    }
}

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Obb Gốc" : "Original OBB", &obbGoc)) {
    if (obbGoc) {
        obbMod = false;
        system(("su -c 'rm -rf " + std::string(pubgObbPath) + " && cp " + std::string(originalObbPath) + " " + std::string(pubgObbPath) + "'").c_str());
    }
}
ImGui::EndGroupPanel();

ImGui::Spacing();
ImGui::Separator();
ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
ImGui::SameLine();
ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), isVietnamese ? "ĐỢI CẬP NHẬT" : "WAITING FOR UPDATE");
ImGui::Spacing();
ImGui::Separator();
ImGui::BeginGroupPanel(isVietnamese ? "Mod Data" : "Mod Data", ImVec2(0.0f, 0.0f));
ImGui::BeginGroupPanel(isVietnamese ? "Map" : "Map", ImVec2(0.0f, 0.0f));
ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), 
isVietnamese ? "Vui lòng chọn map trước khi chọn mod" : "Please select a map before selecting a mod");

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bản đồ Erangel" : "Map Erangel", &mapErangel)) {
    if (mapErangel) {
        mapMiramar = false;
        mapVikendi = false;
        mapLivik = false;
        mapSanhok = false;
    }
}
ImGui::SameLine();

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bản đồ Miramar" : "Map Miramar", &mapMiramar)) {
    if (mapMiramar) {
        mapErangel = false;
        mapVikendi = false;
        mapLivik = false;
        mapSanhok = false;
    }
}
ImGui::SameLine();

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bản đồ Vikendi" : "Map Vikendi", &mapVikendi)) {
    if (mapVikendi) {
        mapErangel = false;
        mapMiramar = false;
        mapLivik = false;
        mapSanhok = false;
    }
}
ImGui::SameLine();

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bản đồ Livik" : "Map Livik", &mapLivik)) {
    if (mapLivik) {
        mapErangel = false;
        mapMiramar = false;
        mapVikendi = false;
        mapSanhok = false;
    }
}

if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bản đồ Sanhok" : "Map Sanhok", &mapSanhok)) {
    if (mapSanhok) {
        mapErangel = false;
        mapMiramar = false;
        mapVikendi = false;
        mapLivik = false;
    }
}

ImGui::EndGroupPanel();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xóa Cỏ" : "Remove Grass", &xoaco);
        ImGui::SameLine();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xóa Cây" : "Remove Trees", &xoacay);
        ImGui::SameLine();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xóa Đá" : "Remove Rocks", &xoada);
        ImGui::TableNextColumn();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xóa Sương" : "Remove Fog", &xoasuong);
        ImGui::SameLine();
        ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Xóa Nước" : "Remove Water", &xoanuoc);
if (ImGui::Button(isVietnamese ? "Bỏ chọn tất cả" : "Deselect All")) {
    xoaco = false;
    xoacay = false;
    xoada = false;
    xoasuong = false;
    xoanuoc = false;
}
    ImGui::EndGroupPanel();
    ImGui::PopStyleColor();
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(2);
}
//================================================================================================//
if (ActiveTab == 4) {//xong
ImGui::Spacing();
            ImGui::Separator();
            ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
ImGui::SameLine();
ImGui::TextColored(ImVec4(1.0f, 0.0f, 0.0f, 1.0f), isVietnamese ? "NGUY HIỂM" : "DANGEROUS");

    ImGui::Spacing();
    ImGui::Separator();

    if (IgnoreBots) {
        ImGui::TextColored(ImVec4(0, 1, 0, 1), isVietnamese ? "AIMBOT ĐÃ AN TOÀN" : "SAFE");
    } else {
        ImGui::TextColored(ImVec4(1, 0, 0, 1), isVietnamese ? "AIMBOT HIỆN NGUY HIỂM" : "DANGEROUS");
    }

    ImVec4 accentColor = ImVec4(0.2f, 0.8f, 1.0f, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, accentColor);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
   
static bool isBlockReportEnabled = Config.HighRisk.rp;
static bool isBlockReportEnabledd = false;

if (isVietnamese) {
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Text("Bước 1: Bật Chặn Tố Cáo ở ngoài sảnh");
    ImGui::PopStyleColor();
} else {
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Text("Step 1: Enable Report Blocking in the lobby");
    ImGui::PopStyleColor();
}
if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Chặn Tố Cáo" : "Block Report", &isBlockReportEnabled)) { 
}
if (isVietnamese) {
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Text("Bước 2: Tới chỗ tổng kết điểm chọn Đóng Sever Game và vào lại game");
    ImGui::PopStyleColor();
} else {
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 0.0f, 1.0f));
    ImGui::Text("Step 2: Go to the score summary, select Block Sever Game, and re-enter the game");
    ImGui::PopStyleColor();
}
if (ImGui::Button(isVietnamese ? "Đóng Sever Game" : "Block Sever Game", ImVec2(200, 50))) {
    clearreportkirin();
    ITZ_HttpsCanay_Closed();
}
    ImGui::Spacing();
    ImGui::Separator();

    if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bật AimBot" : "Enable AimBot", &Config.AimBot.Enable)) {
        }

    ImGui::SliderFloat(isVietnamese ? "  Cỡ Fov " : "  Fov Size ", &FovCucMup, 0.0f, 200.0f);

    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? " Bật Speed Aim " : " Enable Speed Aim ", &AimTocDo);

    if (AimTocDo) {
        ImGui::Spacing();
        ImGui::SliderFloat(isVietnamese ? "Tốc Độ Aim" : "Speed Aim", &AimSmooth, 1.0f, 10.0f, "%.1f");
    }

    ImGui::Text(isVietnamese ? " Giảm Giật Khi AimBot : " : " Recoil AimBot : ");
    ImGui::SameLine();
    ImGui::SliderFloat(" ", &GiamGiat, 0.0f, 2.0f);

    ImGui::Text(isVietnamese ? " Khoảng Cách Aimbot : " : " AimBot Distance : ");
    ImGui::Spacing();
    ImGui::SliderFloat(isVietnamese ? "Mét" : "Meters", &Meter, 0.0f, 300.0f);

    ImGui::SetNextWindowSize(ImVec2((float)glWidth * 0.25f, (float)glHeight * 0.25f), ImGuiCond_Once);
    ImGui::PushItemWidth(-1);
    ImGui::Text(isVietnamese ? " Aim Vô : " : " Aim To : ");
    ImGui::SameLine();


    const char* targets[] = {
        isVietnamese ? "Đầu" : "Head",
        isVietnamese ? "Cổ" : "Neck",
        isVietnamese ? "Bụng" : "Stomach"
    };
    ImGui::Combo("##Target", (int*)&Config.AimBot.Target, targets, IM_ARRAYSIZE(targets));

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? " Aim Khi : " : " Aim When : ");
    ImGui::SameLine();


    const char* triggers[] = {
        isVietnamese ? "Luôn Luôn" : "Always",
        isVietnamese ? "Khi Bắn" : "When Shooting",
        isVietnamese ? "Khi Bật Ngắm" : "When Aiming",
        isVietnamese ? "Bật Ngắm Và Bắn" : "Aiming and Shooting",
        isVietnamese ? "Khi Ngắm Và Khi Bắn" : "When Aiming and When Shooting"
    };
    ImGui::Combo("##Trigger", (int*)&Config.AimBot.Trigger, triggers, IM_ARRAYSIZE(triggers));

    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? " Bỏ Qua Knock " : " Ignore Knock ", &IgnoreKnocked);
    ImGui::SameLine();
    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? " Bỏ Qua Địch Sau Tường " : " Ignore Enemy Behind Wall ", &VisCheck);
    ImGui::SameLine();
    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? " Bỏ Qua Bot " : " Ignore Bot ", &IgnoreBots);
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(2);
}

//================================================================================================//
else if (ActiveTab == 5) {//xong
ImGui::Spacing();
            ImGui::Separator();
ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
ImGui::SameLine();
ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), 
    isVietnamese ? "LỖI MỘT SỐ SKIN ĐỢI FIX" : "SOME SKINS ERROR, WAITING FOR FIX");
          ImGui::Spacing();
          ImGui::Separator();

    ImVec4 accentColor = ImVec4(0.2f, 0.8f, 1.0f, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, accentColor);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
    ImGui::Text(isVietnamese ? " Mod Skin " : " Mod Skin ");
	  if (ImGui::BeginTable("split", 2, ImGuiTableFlags_Borders | ImGuiTableFlags_Resizable |
            ImGuiTableFlags_Reorderable | ImGuiTableFlags_Hideable)) {
            ImGui::TableSetupColumn(isVietnamese ? "TÊN TRANG PHỤC" : "SKIN NAME", ImGuiTableColumnFlags_WidthStretch);
            ImGui::TableSetupColumn(isVietnamese ? "MOD TRANG PHỤC" : "MOD SKIN", ImGuiTableColumnFlags_WidthStretch);


            ImGui::TableHeadersRow();
            ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "TRANG PHỤC X-SUIT" : "X-SUIT SKIN");
ImGui::TableNextColumn();

const char* xsuity_vi[] = { 
    "KHÔNG SKIN", "HUYẾT QUẠ X-SUIT", "PHARAOH VÀNG X-SUIT", 
    "TUYẾT LỞ X-SUIT", "HOÀNG GIA X-SUIT", "POSEIDON X-SUIT", 
    "ẢO THUẬT X-SUIT", "SILVANUS X-SUIT"
};

const char* xsuity_en[] = { 
    "NO SKIN", "BLOOD RAVEN X-SUIT", "GOLDEN PHARAOH X-SUIT", 
    "AVALANCHE X-SUIT", "IRRESIDENCE X-SUIT", "POSEIDON X-SUIT", 
    "ARCANE JESTER X-SUIT", "SILVANUS X-SUIT"
};
const char** xsuity = isVietnamese ? xsuity_vi : xsuity_en;
ImGui::Combo("##xs", &skinxsuit, xsuity, IM_ARRAYSIZE(xsuity_vi));
                                    
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "BỘ TRANG PHỤC" : "SET SKIN");
ImGui::TableNextColumn();

const char* setsskin_vi[] = { "KHÔNG SKIN", "BỘ XÁC ƯỚP", "BỘ BĂNG GIÁ", "BỘ CHÚ HỀ" };
const char* setsskin_en[] = { "NO SKIN", "MUMMY SET", "GLACIER SET", "THE FOOL SET" };

const char** setsskin = isVietnamese ? setsskin_vi : setsskin_en;
ImGui::Combo("##setsskin", &skinset, setsskin, IM_ARRAYSIZE(setsskin_vi));

                                    
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "ĐỘNG TÁC" : "EMOTE SKIN");
ImGui::TableNextColumn();

const char* emoteskin_vi[] = { "KHÔNG SKIN", "ĐỘNG TÁC 1", "ĐỘNG TÁC 2", "ĐỘNG TÁC 3", "ĐỘNG TÁC 4" };
const char* emoteskin_en[] = { "NO SKIN", "EMOTE 1", "EMOTE 2", "EMOTE 3", "EMOTE 4" };

const char** emoteskin = isVietnamese ? emoteskin_vi : emoteskin_en;
ImGui::Combo("##emoteskin", &skinemote, emoteskin, IM_ARRAYSIZE(emoteskin_vi));

                                    
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "MŨ" : "HELMET");
ImGui::TableNextColumn();

const char* helmet_vi[] = { "KHÔNG SKIN", "MŨ HỎA NGỤC", "MŨ BĂNG GIÁ" };
const char* helmet_en[] = { "NO SKIN", "INFERNO HELMET", "GLACIER HELMET" };

const char** helmet = isVietnamese ? helmet_vi : helmet_en;
ImGui::Combo("##helmet", &skinhelmet, helmet, IM_ARRAYSIZE(helmet_vi));

                                    
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "BA LÔ" : "BACKPACK");
ImGui::TableNextColumn();

const char* backpack_vi[] = { "KHÔNG SKIN", "BA LÔ PHARAOH", "BA LÔ DRAVEN", "BA LÔ BAPE", "BA LÔ GODZILLA" };
const char* backpack_en[] = { "NO SKIN", "PHARAOH BACKPACK", "DRAVEN BACKPACK", "BAPE BACKPACK", "GODZILLA BACKPACK" };

const char** backpack = isVietnamese ? backpack_vi : backpack_en;
ImGui::Combo("##backpack", &skinbackpack, backpack, IM_ARRAYSIZE(backpack_vi));

                                    
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "M416 SKIN" : "M416 SKIN");
ImGui::TableNextColumn();

const char* m416_vi[] = { 
    "KHÔNG SKIN", "BĂNG GIÁ - M416", "CHÚ HỀ - M416", "TIẾNG GẦM THẰN LẰN - M416", 
    "KẺ LANG THANG - M416", "TIẾNG GỌI HOANG DÃ - M416", "HOÀNG GIA LỘNG LẪY - M416", 
    "BẬC THẦY BẠC - M416", "CÔNG NGHỆ HẠT NHÂN - M416" 
};

const char* m416_en[] = { 
    "NO SKIN", "GLACIER - M416", "THE FOOL - M416", "LIZARD ROAR - M416", 
    "WANDERER - M416", "CALL OF THE WILD - M416", "IMPERIAL SPLENDOR - M416", 
    "SILVER GURU - M416", "TECHNOCORE - M416" 
};

const char** m416 = isVietnamese ? m416_vi : m416_en;
ImGui::Combo("##m4", &skinm4, m416, IM_ARRAYSIZE(m416_vi));


                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "AKM SKIN" : "AKM SKIN");
ImGui::TableNextColumn();

const char* AKM_vi[] = { 
    "KHÔNG SKIN", "BĂNG GIÁ - AKM", "BẢY ĐẠI DƯƠNG - AKM", "HỔ GẦM - AKM", 
    "ĐIÊU KHẮC - AKM", "HÓA THẠCH SA MẠC - AKM", "ĐÈN LỒNG MA - AKM", 
    "RỒNG NGỤY TRANG - AKM", "CƯỚP BIỂN VÀNG - AKM", "BẠO CHÚA LANG THANG - AKM", 
    "ĐỒ ĐỐC NGÔI SAO - AKM", "LỬA ĐỊA NGỤC - AKM" 
};

const char* AKM_en[] = { 
    "NO SKIN", "GLACIER - AKM", "THE SEVEN SEAS - AKM", "ROARING TIGER - AKM", 
    "SCULPTURE - AKM", "DESERT FOSSIL - AKM", "JACK-O'-LANTERN - AKM", 
    "GHILLIE DRAGON - AKM", "GOLD PIRATE - AKM", "WANDERING TYRANT - AKM", 
    "STAR ADMIRAL - AKM", "HELLFIRE - AKM" 
};

const char** AKM = isVietnamese ? AKM_vi : AKM_en;
ImGui::Combo("##AKM", &skinakm, AKM, IM_ARRAYSIZE(AKM_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "SCAR-L SKIN" : "SCAR-L SKIN");
ImGui::TableNextColumn();

const char* SCAR_vi[] = { 
    "KHÔNG SKIN", "SÚNG PHUN NƯỚC - SCAR-L", "BÍ NGÔ MA THUẬT - SCAR-L", 
    "CHIẾN DỊCH TƯƠNG LAI - SCAR-L", "THẢ NHẠC - SCAR-L", 
    "TINH THỂ HEXTECH - SCAR-L", "GAI ÁC Ý - SCAR-L" 
};

const char* SCAR_en[] = { 
    "NO SKIN", "WATER BLASTER - SCAR-L", "ENCHANTED PUMPKIN - SCAR-L", 
    "OPERATION TOMORROW - SCAR-L", "DROP THE BASS - SCAR-L", 
    "HEXTECH CRYSTAL - SCAR-L", "THORN OF MALICE - SCAR-L" 
};

const char** SCAR = isVietnamese ? SCAR_vi : SCAR_en;
ImGui::Combo("##SCAR-L", &skinscar, SCAR, IM_ARRAYSIZE(SCAR_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "M762 SKIN" : "M762 SKIN");
ImGui::TableNextColumn();

const char* M7_vi[] = { 
    "KHÔNG SKIN", "KỲ LÂN 8-BIT - M762", "GACKT MOONSAGA - M762", 
    "PHẪN NỘ HOA SEN - M762", "MESSI BIỂU TƯỢNG BÓNG ĐÁ - M762", 
    "BẢN GIAO HƯỞNG TÌNH YÊU - M762", "NGUYÊN TỬ NGÔI SAO - M762", 
    "NỔI LOẠN LẠC LỐI - M762" 
};

const char* M7_en[] = { 
    "NO SKIN", "8-BIT UNICORN - M762", "GACKT MOONSAGA - M762", 
    "LOTUS FURY - M762", "MESSI FOOTBALL ICON - M762", 
    "CONCERTO OF LOVE - M762", "STARCORE - M762", 
    "STRAY REBELLION - M762" 
};

const char** M7 = isVietnamese ? M7_vi : M7_en;
ImGui::Combo("##M762", &skinm7, M7, IM_ARRAYSIZE(M7_vi));

                                    
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "ACE32 SKIN" : "ACE32 SKIN");
ImGui::TableNextColumn();

const char* ACE_vi[] = { 
    "KHÔNG SKIN", "CHÙM TIA - ACE32", "MŨI NHỌN BĂNG - ACE32" 
};

const char* ACE_en[] = { 
    "NO SKIN", "BEAM BLAST - ACE32", "ICICLE SPIKE - ACE32" 
};

const char** ACE = isVietnamese ? ACE_vi : ACE_en;
ImGui::Combo("##ACE", &skinsace32, ACE, IM_ARRAYSIZE(ACE_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "M249 SKIN" : "M249 SKIN");
ImGui::TableNextColumn();

const char* M249_vi[] = { 
    "KHÔNG SKIN", "BƯU KIỆN TIỆC TÙNG - M249", "NỮ HOÀNG MÙA ĐÔNG - M249", "GIỌT SƯƠNG VĨNH HẰNG - M249" 
};

const char* M249_en[] = { 
    "NO SKIN", "PARTY PARCEL - M249", "WINTER QUEEN - M249", "MONDROP ETERNA - M249" 
};

const char** M249 = isVietnamese ? M249_vi : M249_en;
ImGui::Combo("##M249", &skinm249, M249, IM_ARRAYSIZE(M249_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "AWM SKIN" : "AWM SKIN");
ImGui::TableNextColumn();

const char* AWM_vi[] = { 
    "KHÔNG SKIN", "BÁO THÙ MAUVE - AWM", "CHỈ HUY CHIẾN TRƯỜNG - AWM", 
    "GODZILLA - AWM", "SÓNG LỬA - AWM" 
};

const char* AWM_en[] = { 
    "NO SKIN", "MAUVE AVENGER - AWM", "FIELD COMMANDER - AWM", 
    "GODZILLA - AWM", "FLAME WAVE - AWM" 
};

const char** AWM = isVietnamese ? AWM_vi : AWM_en;
ImGui::Combo("##AWM", &skinawm, AWM, IM_ARRAYSIZE(AWM_vi));

                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "KAR98K SKIN" : "KAR98K SKIN");
ImGui::TableNextColumn();

const char* KAR_vi[] = { 
    "KHÔNG SKIN", "NANH KHỦNG BỐ - KAR98K", "CƠN THỊNH NỘ KUKULKAN - KAR98K",
    "ĐÊM NHẠC ROCK - KAR98K", "DUYÊN TRĂNG - KAR98K" 
};

const char* KAR_en[] = { 
    "NO SKIN", "TERROR FANG - KAR98K", "KUKULKAN FURY - KAR98K",
    "NIGHT OF ROCK - KAR98K", "MOONLIT GRACE - KAR98K" 
};

const char** KAR = isVietnamese ? KAR_vi : KAR_en;
ImGui::Combo("##KAR98K", &skinkar, KAR, IM_ARRAYSIZE(KAR_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "M24 SKIN" : "M24 SKIN");
ImGui::TableNextColumn();

const char* M24_vi[] = { 
    "KHÔNG SKIN", "BẢY ĐẠI DƯƠNG - M24", "SỨC MẠNH PHARAOH - M24",
    "BƯỚM QUÝ CÔ - M24", "GIAI ĐIỆU CHẾT CHÓC - M24", "VÒNG ĐỜI - M24" 
};

const char* M24_en[] = { 
    "NO SKIN", "THE SEVEN SEAS - M24", "PHARAOH'S MIGHT - M24",
    "LADY BUTTERFLY - M24", "KILLER TUNE - M24", "CIRCLE OF LIFE - M24" 
};

const char** M24 = isVietnamese ? M24_vi : M24_en;
ImGui::Combo("##M24", &skinm24, M24, IM_ARRAYSIZE(M24_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "UZI SKIN" : "UZI SKIN");
ImGui::TableNextColumn();

const char* UZI_vi[] = { 
    "KHÔNG SKIN", "DÃ MAN - UZI", "BIỂU TƯỢNG TINH TẾ - UZI",
    "KHOẢNH KHẮC LÃNG MẠN - UZI", "SỨC MẠNH LẤP LÁNH - UZI" 
};

const char* UZI_en[] = { 
    "NO SKIN", "SAVAGERY - UZI", "ETHEREAL EMBLEM - UZI",
    "ROMANTIC MOMENTS - UZI", "SHIMMER POWER - UZI" 
};

const char** UZI = isVietnamese ? UZI_vi : UZI_en;
ImGui::Combo("##UZI", &skinuzi, UZI, IM_ARRAYSIZE(UZI_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "UMP SKIN" : "UMP SKIN");
ImGui::TableNextColumn();

const char* UMP_vi[] = { 
    "KHÔNG SKIN", "LỬA RỒNG - UMP45", "EMP - UMP45",
    "ẢO TƯỞNG BỊ CẤM - UMP45", "PLATINUM RIPPER - UMP45",
    "KỶ NIỆM - UMP45", "8 BIT BLAST - UMP45" 
};

const char* UMP_en[] = { 
    "NO SKIN", "DRAGONFIRE - UMP45", "EMP - UMP45",
    "OUTLAWED FANTASY - UMP45", "PLATINUM RIPPER - UMP45",
    "ANNIVERSARY - UMP45", "8 BIT BLAST - UMP45" 
};

const char** UMP = isVietnamese ? UMP_vi : UMP_en;
ImGui::Combo("##UMP", &skinump45, UMP, IM_ARRAYSIZE(UMP_vi));
                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "AUG SKIN" : "AUG SKIN");
ImGui::TableNextColumn();

const char* AUG_vi[] = { "KHÔNG SKIN", "RẠP XIẾC LANG THANG - AUG" };
const char* AUG_en[] = { "NO SKIN", "WANDERING CIRCUS - AUG" };
const char** AUG = isVietnamese ? AUG_vi : AUG_en;
ImGui::Combo("##AUG", &skinaug, AUG, IM_ARRAYSIZE(AUG_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "GROZA SKIN" : "GROZA SKIN");
ImGui::TableNextColumn();

const char* GROZA_vi[] = { 
    "KHÔNG SKIN", "KẺ TÀN PHÁ RỪNG - GROZA", "STYX - GROZA",
    "ARIA HOÀNG HÔN - GROZA", "RYOMEN SUKUNA - GROZA" 
};

const char* GROZA_en[] = { 
    "NO SKIN", "FOREST RAIDER - GROZA", "STYX - GROZA",
    "EVENTIDE ARIA - GROZA", "RYOMEN SUKUNA - GROZA" 
};

const char** GROZA = isVietnamese ? GROZA_vi : GROZA_en;
ImGui::Combo("##GROZA", &skingroza, GROZA, IM_ARRAYSIZE(GROZA_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "DP28 SKIN" : "DP28 SKIN");
ImGui::TableNextColumn();

const char* DP_vi[] = { 
    "KHÔNG SKIN", "KẺ SÁT NHÂN BÍ ẨN - DP28", "RỒNG NGỌC MẠ VÀNG - DP28" 
};

const char* DP_en[] = { 
    "NO SKIN", "ENIGMATIC KILLER - DP28", "GILDED JADE DRAGON - DP28" 
};

const char** DP = isVietnamese ? DP_vi : DP_en;
ImGui::Combo("##DP", &skindp28, DP, IM_ARRAYSIZE(DP_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "MK14 SKIN" : "MK14 SKIN");
ImGui::TableNextColumn();

const char* MK14_vi[] = { "KHÔNG SKIN", "DẢI NGÂN HÀ MẠ VÀNG - MK14" };
const char* MK14_en[] = { "NO SKIN", "GILDED GALAXY - MK14" };
const char** MK14 = isVietnamese ? MK14_vi : MK14_en;
ImGui::Combo("##MK14", &skinmk14, MK14, IM_ARRAYSIZE(MK14_vi));

                                    ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "M16A4 SKIN" : "M16A4 SKIN");
ImGui::TableNextColumn();

const char* M16A4_vi[] = { 
    "KHÔNG SKIN", "MÁU VÀ XƯƠNG - M16A4", "XUNG KÍCH CỰC QUANG - M16A4", 
    "LƯỠI DAO RỰC RỠ - M16A4", "LÕI BỘ XƯƠNG - M16A4" 
};

const char* M16A4_en[] = { 
    "NO SKIN", "BLOOD & BONES - M16A4", "AURORA PULSE - M16A4", 
    "RADIANT EDGE - M16A4", "SKELETAL CORE - M16A4" 
};

const char** M16A4 = isVietnamese ? M16A4_vi : M16A4_en;
ImGui::Combo("##M16A4", &skinm16a4, M16A4, IM_ARRAYSIZE(M16A4_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "BIZON SKIN" : "BIZON SKIN");
ImGui::TableNextColumn();

const char* BIZON_vi[] = { 
    "KHÔNG SKIN", "TẮC KÈ RỰC LỬA - PP-19 BIZON", "KẺ NGHIỀN NÁT ĐẦU LÂU - PP-19 BIZON" 
};

const char* BIZON_en[] = { 
    "NO SKIN", "BLAZING CHAMELEON - PP-19 BIZON", "SKULLCRUSHER - PP-19 BIZON" 
};

const char** BIZON = isVietnamese ? BIZON_vi : BIZON_en;
ImGui::Combo("##BIZON", &skinbizon, BIZON, IM_ARRAYSIZE(BIZON_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "VECTOR SKIN" : "VECTOR SKIN");
ImGui::TableNextColumn();

const char* VECTOR_vi[] = { 
    "KHÔNG SKIN", "RĂNG MÁU - VECTOR", "HOA HỒNG ĐÊM - VECTOR", 
    "CÔ NÀNG NGHỊCH NGỢM - VECTOR", "THỢ SĂN TỐI THƯỢNG - VECTOR", "TỬ THẦN MẠ VÀNG - VECTOR" 
};

const char* VECTOR_en[] = { 
    "NO SKIN", "BLOOD TOOTH - VECTOR", "MIDNIGHT ROSE - VECTOR", 
    "CUTE BADDIE - VECTOR", "ULTIMATE PREDATOR - VECTOR", "GILDED REAPER - VECTOR" 
};

const char** VECTOR = isVietnamese ? VECTOR_vi : VECTOR_en;
ImGui::Combo("##VECTOR", &skinvector, VECTOR, IM_ARRAYSIZE(VECTOR_vi));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "COUPE" : "COUPES");
ImGui::TableNextColumn();
const char* coupee_vn[] = { 
    "KHÔNG SKIN", "VIP", "MCLAREN 570S (ĐEN OBSIDIAN)", "MCLAREN 570S (TRẮNG MẶT TRĂNG)", 
    "MCLAREN 570S (HỒNG DÂU)", "MCLAREN 570S (TRẮNG)", "MCLAREN 570S (VÀNG ĐEN)", 
    "MCLAREN 570S (SẮC MÀU)", "KOENIGSEGG JESKO (BẠC HÓA ƯNG)", "KOENIGSEGG JESKO (NHIỀU MÀU)", 
    "KOENIGSEGG JESKO (BÌNH MINH)", "LAMBORGHINI COUPE", "LAMBORGHINI AVENTADOR SVJ XANH LÁ", 
    "LAMBORGHINI CENTENARIO NGÂN HÀ", "LAMBORGHINI AVENTADOR SVJ", "LAMBORGHINI CENTENARIO THÀNH PHỐ ĐÊM", 
    "KOENIGSEGG ONE:1 VÀNG", "KOENIGSEGG ONE:1 ĐA SẮC", "KOENIGSEGG ONE:1 NGỌC HỒNG", 
    "KOENIGSEGG ONE:1 PHƯỢNG HOÀNG", "NHẢY ĐẾN CUILAN", "BÌNH MINH CỦA CÚ NHẢY", "NHẢY ĐẾN BẦU TRỜI", 
    "DODGE CHALLENGER SRT HELLCAT - LỬA", "DODGE CHALLENGER SRT HELLCAT - XANH LÁ", 
    "MASERATI MC20 TRẮNG", "MASERATI MC20 DANJIE", "MASERATI MC20 GIẤC MƠ", 
    "BUGATTI VEYRON 16.4 MÂY SẮC MÀU", "BUGATTI VEYRON 16.4 ĐEN VÀNG TỐI GIẢN", 
    "BUGATTI VEYRON 16.4", "BUGATTI LA VOITURE NOIRE", "BUGATTI LA VOITURE NOIRE NEBULA", 
    "BUGATTI LA VOITURE NOIRE CẢNG ĐÔNG", "ASTON MARTIN VALKYRIE PHÁT SÁNG KIM CƯƠNG", 
    "ASTON MARTIN VALKYRIE BÓNG XANH BẮC CỰC"
};
const char* coupee_en[] = { 
    "NO SKIN", "VIP", "MCLAREN 570S (OBSIDIAN BLACK)", "MCLAREN 570S (MOON WHITE)", 
    "MCLAREN 570S (BERRY POWDER)", "MCLAREN 570S (WHITE)", "MCLAREN 570S (BLACK GOLD)", 
    "MCLAREN 570S (COLORFUL)", "KOENIGSEGG JESKO (SILVER FALCON)", "KOENIGSEGG JESKO (NI COLOR)", 
    "KOENIGSEGG JESKO (DAWN)", "LAMBORGHINI COUPERB", "LAMBORGHINI AVENTADOR SVJ GREEN FIELD", 
    "LAMBORGHINI CENTENARIO GALAXY", "LAMBORGHINI AVENTADOR SVJ", "LAMBORGHINI CENTENARIO NIGHT CITY", 
    "KOENIGSEGG ONE:1 GILT", "KOENIGSEGG ONE:1 CYBERNEBULA", "KOENIGSEGG ONE:1 ROSE JADE", 
    "KOENIGSEGG ONE:1 PHOENIX", "LEAP TO CUILAN", "DAWN OF JUMP", "LEAP TO THE SKY", 
    "DODGE CHALLENGER SRT HELLCAT - FIRE", "DODGE CHALLENGER SRT HELLCAT - LIME", 
    "MASERATI MC20 WHITE", "MASERATI MC20 DANJIE", "MASERATI MC20 DREAM", 
    "BUGATTI VEYRON 16.4 COLORFUL CLOUD", "BUGATTI VEYRON 16.4 MINIMALIST BLACK GOLD", 
    "BUGATTI VEYRON 16.4", "BUGATTI LA VOITURE NOIRE", "BUGATTI LA VOITURE NOIRE NEBULA", 
    "BUGATTI LA VOITURE NOIRE FREEZE PORT", "ASTON MARTIN VALKYRIE DIAMOND GLOW", 
    "ASTON MARTIN VALKYRIE AURORA GREEN SHADOW"
};
ImGui::Combo("##xz", &coupe, isVietnamese ? coupee_vn : coupee_en, IM_ARRAYSIZE(coupee_en));


ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "UAZ" : "UAZ");
ImGui::TableNextColumn();
const char* Uaz_vn[] = { 
    "KHÔNG SKIN", "UAZ VŨ TRỤ", "BAPE X PUBGM CAMO UAZ", "GODZILLA UAZ", 
    "UAZ BÍ NGÔ MA THUẬT", "UAZ KIÊN GIÁP", "LAMBORGHINI URUS GIALLA INTI", 
    "UAZ LEVANTE NEON URBANO", "MASERATI UAZ", "MASERATI LUCE UAZ", "MASERATI UAZ BLU EMOZIONE"
};
const char* Uaz_en[] = { 
    "NO SKIN", "UAZ UNIVERSE", "BAPE X PUBGM CAMO UAZ", "GODZILLA UAZ", 
    "ENCHANTED PUMPKIN UAZ", "AEGIS UAZ", "LAMBORGHINI URUS GIALLA INTI", 
    "UAZ LEVANTE NEON URBANO", "MASERATI UAZ", "MASERATI LUCE UAZ", "MASERATI UAZ BLU EMOZIONE"
};
ImGui::Combo("##uaz", &Uaz, isVietnamese ? Uaz_vn : Uaz_en, IM_ARRAYSIZE(Uaz_en));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "XE TẢI QUÁI VẬT" : "MONSTER TRUCK");
ImGui::TableNextColumn();
const char* monstertruck_vn[] = { "KHÔNG SKIN", "XE TẢI QUÁI VẬT VŨ TRỤ" };
const char* monstertruck_en[] = { "NO SKIN", "MONSTER TRUCK UNIVERSE" };
ImGui::Combo("##monstertruck", &monstertruck, isVietnamese ? monstertruck_vn : monstertruck_en, IM_ARRAYSIZE(monstertruck_en));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "XE MÔ TÔ" : "MOTORCYCLE");
ImGui::TableNextColumn();
const char* Motorcycle_vn[] = { 
    "KHÔNG SKIN", "XE MÔ TÔ VŨ TRỤ", "BAPE X PUBGM CAMO XE MÔ TÔ", 
    "GODZILLA XE MÔ TÔ", "XE MÔ TÔ BÍ NGÔ MA THUẬT", "XE MÔ TÔ KIÊN GIÁP", 
    "XE MÔ TÔ GIALLA INTI", "XE MÔ TÔ LEVANTE NEON URBANO", 
    "MASERATI XE MÔ TÔ", "MASERATI XE MÔ TÔ BLU EMOZIONE"
};
const char* Motorcycle_en[] = { 
    "NO SKIN", "MOTORCYCLE UNIVERSE", "BAPE X PUBGM CAMO MOTORCYCLE", 
    "GODZILLA MOTORCYCLE", "ENCHANTED PUMPKIN MOTORCYCLE", "AEGIS MOTORCYCLE", 
    "MOTORCYCLE GIALLA INTI", "MOTORCYCLE LEVANTE NEON URBANO", 
    "MASERATI MOTORCYCLE", "MASERATI MOTORCYCLE BLU EMOZIONE"
};
ImGui::Combo("##Motorcycle", &Motorcycle, isVietnamese ? Motorcycle_vn : Motorcycle_en, IM_ARRAYSIZE(Motorcycle_en));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "XE TAY GA" : "SCOOTER");
ImGui::TableNextColumn();
const char* Scooter_vn[] = { 
    "KHÔNG SKIN", "XE TAY GA VŨ TRỤ", "BAPE X PUBGM CAMO XE TAY GA", "GODZILLA XE TAY GA", 
    "XE TAY GA BÍ NGÔ MA THUẬT", "XE TAY GA KIÊN GIÁP", "LAMBORGHINI URUS GIALLA XE TAY GA", 
    "XE TAY GA LEVANTE NEON URBANO", "XE TAY GA LEVANTE", "MASERATI LUCE XE TAY GA", 
    "MASERATI XE TAY GA BLU EMOZIONE" 
};
const char* Scooter_en[] = { 
    "NO SKIN", "SCOOTER UNIVERSE", "BAPE X PUBGM CAMO SCOOTER", "GODZILLA SCOOTER", 
    "ENCHANTED PUMPKIN SCOOTER", "AEGIS SCOOTER", "LAMBORGHINI URUS GIALLA SCOOTER", 
    "SCOOTER LEVANTE NEON URBANO", "SCOOTER LEVANTE SCOOTER", "MASERATI LUCE SCOOTER", 
    "MASERATI SCOOTER BLU EMOZIONE" 
};
ImGui::Combo("##Scooter", &Scooter, isVietnamese ? Scooter_vn : Scooter_en, IM_ARRAYSIZE(Scooter_en));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "BUGGY" : "BUGGY");
ImGui::TableNextColumn();
const char* Buggy_vn[] = { 
    "KHÔNG SKIN", "BUGGY VŨ TRỤ", "BAPE X PUBGM CAMO BUGGY", "GODZILLA BUGGY", 
    "BUGGY BÍ NGÔ MA THUẬT", "BUGGY KIÊN GIÁP", "LAMBORGHINI URUS BUGGY INTI", 
    "BUGGY LEVANTE NEON URBANO", "BUGGY LEVANTE FIRMAMENTO", "MASERATI BUGGY ARANCIONE", 
    "MASERATI BUGGY BLU EMOZIONE" 
};
const char* Buggy_en[] = { 
    "NO SKIN", "BUGGY UNIVERSE", "BAPE X PUBGM CAMO BUGGY", "GODZILLA BUGGY", 
    "ENCHANTED PUMPKIN BUGGY", "AEGIS BUGGY", "LAMBORGHINI URUS BUGGY INTI", 
    "BUGGY LEVANTE NEON URBANO", "BUGGY LEVANTE FIRMAMENTO", "MASERATI BUGGY ARANCIONE", 
    "MASERATI BUGGY BLU EMOZIONE" 
};
ImGui::Combo("##Buggy", &Buggy, isVietnamese ? Buggy_vn : Buggy_en, IM_ARRAYSIZE(Buggy_en));

ImGui::TableNextColumn();
ImGui::Text(isVietnamese ? "DACIA" : "DACIA");
ImGui::TableNextColumn();
const char* Dacia_vn[] = { 
    "KHÔNG SKIN", "Ô TÔ TUYẾT ĐA SẮC", "XE BÍ NGÔ MA THUẬT (CẤP 3)", 
    "SEDAN BÓNG MA LÂU ĐÀI (CẤP 3)", "XE TUẦN LỘC TỐC ĐỘ (CẤP 3)", 
    "TESLA ROADSTER (BẠC SÁNG)", "TESLA ROADSTER (QINXINFEN)", 
    "TESLA ROADSTER (XANH NƯỚC)", "KOENIGSEGG GEMERA (XÁM BẠC)", 
    "KOENIGSEGG GEMERA (HỒNG ANH)", "KOENIGSEGG GEMERA (QIMING)", 
    "LAMBORGHINI DACIA", "LAMBORGHINI ESTOQUE", "LAMBORGHINI ESTOQUE XÁM KIM LOẠI", 
    "XE NHÀ HÀNG FAST FOOD ZOMBIE (CẤP 4)", "DODGE RAIDER SRT HELLCAT - HOA HỒNG KIM LOẠI", 
    "DODGE RAIDER SRT HELLCAT - TONY CANO TORQUE", 
    "DODGE RAIDER SRT HELLCAT JAILBREAK - TÍM QUYẾN RŨ", 
    "XE MỘ ĐÁ (CẤP 3)", "SWIFT ROSE STAR", "SWIFT PURPLE NIGHT", "XUNLING LIGHT DOME"
};
const char* Dacia_en[] = { 
    "NO SKIN", "COLORFUL SNOWSTORM MODIFIED CAR", "MAGIC PUMPKIN CAR (LEVEL 3)", 
    "CASTLE PHANTOM SEDAN (LEVEL 3)", "SPEED REINDEER CAR (LEVEL 3)", 
    "TESLA ROADSTER (SHINING SILVER)", "TESLA ROADSTER (QINXINFEN)", 
    "TESLA ROADSTER (WATER DROP BLUE)", "KOENIGSEGG GEMERA (SILVER GRAY)", 
    "KOENIGSEGG GEMERA (HONGYING)", "KOENIGSEGG GEMERA (QIMING)", 
    "LAMBORGHINI DACIA", "LAMBORGHINI ESTOQUE", "LAMBORGHINI ESTOQUE METALLIC GRAY", 
    "ZOMBIE FAST FOOD RESTAURANT CAR (LEVEL 4)", "DODGE RAIDER SRT HELLCAT - PLATED BEGONIA", 
    "DODGE RAIDER SRT HELLCAT - TONY CANO TORQUE", 
    "DODGE RAIDER SRT HELLCAT JAILBREAK - PURPLE CHARM DUHUA", 
    "TOMBSTONE CAR LEVEL 3", "SWIFT ROSE STAR", "SWIFT PURPLE NIGHT", "XUNLING LIGHT DOME"
};
ImGui::Combo("##op", &Dacia, isVietnamese ? Dacia_vn : Dacia_en, IM_ARRAYSIZE(Dacia_en));
                                    ImGui::EndTable();
                                    ImGui::PopStyleColor();
                                    ImGui::PopStyleVar(2);
									}		
        }
//================================================================================================//
else if (ActiveTab == 6) { //xong
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
    ImGui::SameLine();
    ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), isVietnamese ? "AN TOÀN" : "SAFE");
    ImVec4 accentColor = ImVec4(0.2f, 0.8f, 1.0f, 1.0f);
    ImGui::PushStyleColor(ImGuiCol_Text, accentColor);
    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 10.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));

    ImGui::BeginTable("IMEI Table", 2, ImGuiTableFlags_Borders);

    ImGui::TableNextColumn();
    static int selectedIMEIIndex = -1;
    static std::vector<std::string> imeis;
    static char changedIMEI[16] = "";
    static bool showSelectIMEIMessage = false;
    static float selectIMEIMessageTime = 0.0f;

    if (imeis.empty()) {
        for (int i = 0; i < 10; ++i) {
            imeis.push_back(generateFakeIMEI());
        }
    }

    for (int i = 0; i < imeis.size(); ++i) {
        if (ImGui::Selectable(imeis[i].c_str(), selectedIMEIIndex == i)) {
            selectedIMEIIndex = i;
            showSelectIMEIMessage = false; 
        }
    }

    ImGui::TableNextColumn();
    if (ImGui::Button(isVietnamese ? "Fake IMEI" : "Fake IMEI", ImVec2(188, 50))) {
        if (selectedIMEIIndex != -1) {
            std::string imeiToFake = imeis[selectedIMEIIndex];
            std::string command = "su -c 'service call iphonesubinfo 1 s16 " + imeiToFake + "'";
            system(command.c_str());
            strncpy(changedIMEI, imeiToFake.c_str(), sizeof(changedIMEI) - 1);
            changedIMEI[sizeof(changedIMEI) - 1] = '\0';
        } else {
            showSelectIMEIMessage = true;
            selectIMEIMessageTime = ImGui::GetTime();  
        }
    }

    if (showSelectIMEIMessage && ImGui::GetTime() - selectIMEIMessageTime <= 5.0f) {
        ImGui::Text(isVietnamese ? "Vui lòng chọn IMEI!" : "Please select an IMEI!");
    } else {
        showSelectIMEIMessage = false;  
    }

    if (ImGui::Button(isVietnamese ? "Bỏ Fake IMEI" : "Remove Fake IMEI", ImVec2(188, 50))) {
        std::string command = "su -c 'service call iphonesubinfo 1 s16 ORIGINAL_IMEI'";
        system(command.c_str());
        strncpy(changedIMEI, "", sizeof(changedIMEI));
        selectedIMEIIndex = -1;
    }
    ImGui::EndTable();
    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "IMEI đã thay đổi:" : "Changed IMEI:");

    ImGui::SetNextItemWidth(ImGui::CalcTextSize("123456789012345").x + 20.0f);
    ImGui::InputText("##changedIMEI", changedIMEI, IM_ARRAYSIZE(changedIMEI), ImGuiInputTextFlags_ReadOnly);

    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Text(isVietnamese ? "TRẠNG THÁI TƯỜNG LỬA :" : "FIREWALL STATUS :");
    ImGui::SameLine();
    ImGui::TextColored(firewallEnabled ? ImVec4(0.0f, 1.0f, 0.0f, 1.0f) : ImVec4(1.0f, 0.0f, 0.0f, 1.0f),
                       firewallEnabled ? (isVietnamese ? "ĐANG KÍCH HOẠT" : "ACTIVATED") 
                                       : (isVietnamese ? "TẮT" : "DEACTIVATED"));
    if (ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Kích Hoạt Firewall" : "Enable Firewall", &firewallEnabled)) {
        if (firewallEnabled) {
            std::string command = "su -c 'iptables -A INPUT -j DROP'";  
            system(command.c_str());

            std::string blockPortsCommand = "su -c 'iptables -A INPUT -p tcp --dport 443 -j DROP && "
                                            "iptables -A INPUT -p tcp --dport 80 -j DROP && "
                                            "iptables -A INPUT -p tcp --dport 25000:25099 -j DROP'";
            system(blockPortsCommand.c_str());
        } else {
            std::string command = "su -c 'iptables -F'";  
            system(command.c_str());
        }
    }

    ImGui::Spacing();

    if (firewallEnabled) {
        ImGui::Text(isVietnamese ? "Các cổng bị chặn khi firewall kích hoạt:" : "Ports blocked when firewall is activated:");
        ImGui::BulletText("Cổng 443 (HTTPS)");
        ImGui::BulletText("Cổng 80 (HTTP)");
        ImGui::BulletText("Cổng 25000-25099 (Dải cổng PUBG)");
    }
    ImGui::Spacing();
    ImGui::Separator();
    ImGui::Text(isVietnamese ? "TRẠNG THÁI :" : "STATUS :");
    ImGui::SameLine();
    ImGui::TextColored(ImVec4(1.0f, 1.0f, 0.0f, 1.0f), isVietnamese ? "ĐỢI CẬP NHẬT" : "WAITING FOR UPDATE");
    ImGui::Spacing();
    ImGui::Separator();
        static bool turboEnabled = false;
    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bật Chế Độ Turbo" : "Enable Turbo Mode", &turboEnabled);

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "Cài Đặt FPS" : "FPS Settings");
    static int fpsLimit = 60;
    ImGui::SliderInt(isVietnamese ? "Giới Hạn FPS" : "Max FPS", &fpsLimit, 30, 240);

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "Tối Ưu RAM" : "Memory Optimization");
    if (ImGui::Button(isVietnamese ? "Dọn Dẹp RAM" : "Clear RAM", ImVec2(200, 50))) {}
    ImGui::SameLine();
    if (ImGui::Button(isVietnamese ? "Tăng Hiệu Suất" : "Boost Performance", ImVec2(200, 50))) {}

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "Cài Đặt Đồ Họa" : "Graphics Settings");
    static int resolution = 1080;
    ImGui::SliderInt(isVietnamese ? "Độ Phân Giải" : "Resolution", &resolution, 720, 2160);
    
    static float brightness = 1.0f;
    ImGui::SliderFloat(isVietnamese ? "Độ Sáng" : "Brightness", &brightness, 0.5f, 2.0f);
    
    static bool vSync = false;
    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bật VSync" : "Enable VSync", &vSync);

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "Hiệu Suất CPU" : "CPU Performance");
    if (ImGui::Button(isVietnamese ? "Bật Hiệu Suất Cao" : "Enable High Performance Mode", ImVec2(300, 50))) {}

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "Chế Độ Tiết Kiệm Pin" : "Battery Saver Mode");
    static bool batterySaver = false;
    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bật Tiết Kiệm Pin" : "Enable Battery Saver", &batterySaver);

    ImGui::Spacing();
    ImGui::Text(isVietnamese ? "Tăng Tốc GPU" : "GPU Acceleration");
    static bool gpuBoost = false;
    ImGui::𝐁𝐀𝐄_𝐋𝐔𝐕(isVietnamese ? "Bật GPU Turbo" : "Enable GPU Turbo", &gpuBoost);

    if (ImGui::BeginTable("SysInfoTable", 2, ImGuiTableFlags_BordersOuter | ImGuiTableFlags_BordersInner)){
        ImGui::TableSetupColumn(isVietnamese ? "Thông Tin" : "Category", ImGuiTableColumnFlags_WidthFixed, 150.0f);
        ImGui::TableSetupColumn(isVietnamese ? "Giá Trị" : "Value", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableHeadersRow();

        
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::Text(isVietnamese ? "Bộ Vi Xử Lý (CPU)" : "Processor (CPU)");
        ImGui::TableSetColumnIndex(1);
        ImGui::Text("%s", getCPUModel().c_str());

        
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::Text("GPU");
        ImGui::TableSetColumnIndex(1);
        ImGui::Text("%s", getGPUModel().c_str());

        
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::Text("RAM");
        ImGui::TableSetColumnIndex(1);
        ImGui::Text("%s", getRAMInfo().c_str());

        ImGui::EndTable();
    }
    ImGui::PopStyleColor();
    ImGui::PopStyleVar(2);
}
//================================================================================================//
ImGui::Spacing();
ImGui::Separator();
float windowWidth1 = ImGui::GetWindowSize().x;

float button1Width = ImGui::CalcTextSize(isVietnamese ? " TELEGRAM " : " TELEGRAM ").x + ImGui::GetStyle().FramePadding.x * 2;
float button2Width = ImGui::CalcTextSize(isVietnamese ? " YOUTUBE " : " YOUTUBE ").x + ImGui::GetStyle().FramePadding.x * 2;
float totalButtonWidth = button1Width + button2Width + ImGui::GetStyle().ItemSpacing.x;

float offset = (windowWidth1 - totalButtonWidth) * 0.5f;
if (offset > 0.0f) {
    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + offset);
}

static bool TELE = false;
if (!TELE) {
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51.0f / 255.0f, 64.0f / 255.0f, 73.0f / 255.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(51.0f / 255.0f, 64.0f / 255.0f, 73.0f / 255.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(51.0f / 255.0f, 64.0f / 255.0f, 73.0f / 255.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255.0f, 255.0f, 255.0f, 1.0f));

    const char* telegramButtonText = isVietnamese ? " TELEGRAM " : " TELEGRAM ";
    if (ImGui::Button(telegramButtonText)) {
        OpenURL("https://t.me/teambkgmod");
    }
    
    ImGui::PopStyleColor(4);
}

ImGui::SameLine();
static bool YTB = false;
if (!YTB) {
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51.0f / 255.0f, 64.0f / 255.0f, 73.0f / 255.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(51.0f / 255.0f, 64.0f / 255.0f, 73.0f / 255.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(51.0f / 255.0f, 64.0f / 255.0f, 73.0f / 255.0f, 1.0f));
    ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(255.0f, 255.0f, 255.0f, 1.0f));
    
    const char* youtubeButtonText = isVietnamese ? " YOUTUBE " : " YOUTUBE ";
    if (ImGui::Button(youtubeButtonText)) {
        OpenURL("https://youtube.com/@teambkgmod");
    }
    
    ImGui::PopStyleColor(4);
}
//================================================================================================//
}
}//ATCR
}
}
ImGui::End();
ImGui::Render();

ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

return orig_eglSwapBuffers(dpy, surface);
}

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);

int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
if (initImGui) {
ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float) screenWidth / (float) glWidth, (float) screenHeight / (float) glHeight});
}
return orig_onInputEvent(app, inputEvent);
}


void *(*oProcessEvent)(UObject *pObj, UFunction *pFunc, void *pArgs);
void *hkProcessEvent(UObject *pObj, UFunction *pFunc, void *pArgs){
if( std::string(pObj->GetName().c_str()).find("DeadBoxAvatarComponent") != std::string::npos ) {
   UDeadBoxAvatarComponent *DeadBoxPointer = ( UDeadBoxAvatarComponent *) pObj; 
    if( std::string(pFunc->GetFullName().c_str()).find("GetLuaFilePath") != std::string::npos ) {
    uint32_t Key = DeadBoxPointer->IsSelf();              
    auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
    ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                if(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){
if (skinm4 == 1) 
DeadBoxPointer->ChangeItemAvatar(1101004046, true); 
else if (skinm4 == 2) 
DeadBoxPointer->ChangeItemAvatar(1101004062, true); 
else if (skinm4 == 3) 
DeadBoxPointer->ChangeItemAvatar(1101004086, true); 
else if (skinm4 == 4) 
DeadBoxPointer->ChangeItemAvatar(1101004218, true);
else if (skinm4 == 5) 
DeadBoxPointer->ChangeItemAvatar(1101004098, true); 
else if (skinm4 == 6) 
DeadBoxPointer->ChangeItemAvatar(1101004163, true); 
else if (skinm4 == 7) 
DeadBoxPointer->ChangeItemAvatar(1101004201, true); 
else if (skinm4 == 8) 
DeadBoxPointer->ChangeItemAvatar(1101004138, true);
else if (skinm4 == 9) 
DeadBoxPointer->ChangeItemAvatar(1101004209, true); 
else if (skinm4 == 10) 
DeadBoxPointer->ChangeItemAvatar(1101004218, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
if (skinakm == 1)
DeadBoxPointer->ChangeItemAvatar( 1101001089, true); 
if (skinakm == 2)
DeadBoxPointer->ChangeItemAvatar( 1101001063, true); 
if (skinakm == 3)
DeadBoxPointer->ChangeItemAvatar( 1101001068, true); 
if (skinakm == 4)
DeadBoxPointer->ChangeItemAvatar( 1101001042, true); 
if (skinakm == 5)
DeadBoxPointer->ChangeItemAvatar( 1101001101, true); 
if (skinakm == 6)
DeadBoxPointer->ChangeItemAvatar( 1101001116, true); 
if (skinakm == 7)
DeadBoxPointer->ChangeItemAvatar( 1101001128, true);         
else if (skinakm == 8)
DeadBoxPointer->ChangeItemAvatar( 1101001143, true);                
else if (skinakm == 9)
DeadBoxPointer->ChangeItemAvatar( 1101001174, true);
else if (skinakm == 10)
DeadBoxPointer->ChangeItemAvatar( 1101001213, true);
else if (skinakm == 11)
DeadBoxPointer->ChangeItemAvatar( 1101001023, true);
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR")){
if (skinscar == 1)
DeadBoxPointer->ChangeItemAvatar( 1101003057, true); 
if (skinscar == 2)
DeadBoxPointer->ChangeItemAvatar( 1101003070, true); 
if (skinscar == 3)
DeadBoxPointer->ChangeItemAvatar( 1101003079, true);
if (skinscar == 4)
DeadBoxPointer->ChangeItemAvatar( 1101003099, true); 
if (skinscar == 5)
DeadBoxPointer->ChangeItemAvatar( 1101003119, true);
if (skinscar == 6)
DeadBoxPointer->ChangeItemAvatar( 1101003146, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){
if (skinm7 == 1)
DeadBoxPointer->ChangeItemAvatar( 1101008026, true);
if (skinm7 == 2)
DeadBoxPointer->ChangeItemAvatar( 1101008116, true); 
if (skinm7 == 3)
DeadBoxPointer->ChangeItemAvatar( 1101008070, true); 
if (skinm7 == 4)
DeadBoxPointer->ChangeItemAvatar( 1101008036, true);
if (skinm7 == 5)
DeadBoxPointer->ChangeItemAvatar( 1101008051, true); 
if (skinm7 == 6)
DeadBoxPointer->ChangeItemAvatar( 1101008104, true); 
if (skinm7 == 7)
DeadBoxPointer->ChangeItemAvatar( 1101008081, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
if (skingroza == 1)
DeadBoxPointer->ChangeItemAvatar( 1101005019, true); 
if (skingroza == 2)
DeadBoxPointer->ChangeItemAvatar( 1101005052, true);
if (skingroza == 3)
DeadBoxPointer->ChangeItemAvatar( 1101005025, true); 
if (skingroza == 4)
DeadBoxPointer->ChangeItemAvatar( 1101005038, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){
if (skinuzi == 1)
DeadBoxPointer->ChangeItemAvatar( 1102001024, true); 
if (skinuzi == 2)
DeadBoxPointer->ChangeItemAvatar( 1102001036, true); 
if (skinuzi == 3)
DeadBoxPointer->ChangeItemAvatar( 1102001058, true); 
if (skinuzi == 4)
DeadBoxPointer->ChangeItemAvatar( 1102001069, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
if (skinm16a4 == 1)
DeadBoxPointer->ChangeItemAvatar( 1101002029, true); 
if (skinm16a4 == 2)
DeadBoxPointer->ChangeItemAvatar( 1101002056, true); 
if (skinm16a4 == 3)
DeadBoxPointer->ChangeItemAvatar( 1101002068, true); 
if (skinm16a4 == 4)
DeadBoxPointer->ChangeItemAvatar( 1101002081, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){
if (skinump45 == 1)
DeadBoxPointer->ChangeItemAvatar( 1102002043, true); 
if (skinump45 == 2)
DeadBoxPointer->ChangeItemAvatar( 1102002053, true); 
if (skinump45 == 3)
DeadBoxPointer->ChangeItemAvatar( 1102002061, true); 
if (skinump45 == 4)
DeadBoxPointer->ChangeItemAvatar( 1102002070, true); 
if (skinump45 == 5)
DeadBoxPointer->ChangeItemAvatar( 1102002030, true); 
if (skinump45 == 6)
DeadBoxPointer->ChangeItemAvatar( 1102002090, true); 
if (skinump45 == 7)
DeadBoxPointer->ChangeItemAvatar( 1102002136, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
if (skinsace32 == 1)
DeadBoxPointer->ChangeItemAvatar( 1101102007, true); 
if (skinsace32 == 2)
DeadBoxPointer->ChangeItemAvatar( 1101102017, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
if (skinawm == 1)
DeadBoxPointer->ChangeItemAvatar( 1103003022, true); 
if (skinawm == 2)
DeadBoxPointer->ChangeItemAvatar( 1103003030, true); 
if (skinawm == 3)
DeadBoxPointer->ChangeItemAvatar( 1103003042, true); 
if (skinawm == 4)
DeadBoxPointer->ChangeItemAvatar( 1103003062, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){
if (skinm24 == 1)
DeadBoxPointer->ChangeItemAvatar( 1103002018, true); 
if (skinm24 == 2)
DeadBoxPointer->ChangeItemAvatar( 1103002030, true); 
if (skinm24 == 3)
DeadBoxPointer->ChangeItemAvatar( 1103002049, true); 
if (skinm24 == 4)
DeadBoxPointer->ChangeItemAvatar( 1103002047, true); 
if (skinm24 == 5)
DeadBoxPointer->ChangeItemAvatar( 1103002059, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
if (skinqbz == 1)
DeadBoxPointer->ChangeItemAvatar( 1101007025, true); 
if (skinqbz == 2)
DeadBoxPointer->ChangeItemAvatar( 1101007036, true); 
if (skinqbz == 3)
DeadBoxPointer->ChangeItemAvatar( 1101007046, true); 
}
if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){
if (skinm249 == 1)
DeadBoxPointer->ChangeItemAvatar( 1105001034, true); 
if (skinm249 == 2)
DeadBoxPointer->ChangeItemAvatar( 1105001020, true); 
if (skinm249 == 3)
DeadBoxPointer->ChangeItemAvatar( 1105001048, true); 

}}}}}}

if (std::string(pFunc->GetFullName().c_str()).find("BackpackBlueprintUtils_BP.BackpackBlueprintUtils_BP_C.CreateBattleItemHandle") != std::string::npos)
{
UBackpackUtils_CreateBattleItemHandle_Params *PARAMS = ( UBackpackUtils_CreateBattleItemHandle_Params * ) pArgs;
std::string strWeaponId = std::to_string((int)PARAMS->DefineID.TypeSpecificID);

if (strstr(strWeaponId.c_str(), "1400129"))
{

             if (skinxsuit == 1)
                        PARAMS->DefineID.TypeSpecificID = 1405909;
            else if (skinxsuit == 2)
                        PARAMS->DefineID.TypeSpecificID = 1405628;
            else if (skinxsuit == 3)
                        PARAMS->DefineID.TypeSpecificID = 1406152;
            else if (skinxsuit == 4)
                       PARAMS->DefineID.TypeSpecificID = 1406475;
            else if (skinxsuit == 5)
                        PARAMS->DefineID.TypeSpecificID = 1405983;
            else if (skinxsuit == 6)
                        PARAMS->DefineID.TypeSpecificID = 1406638;
            else if (skinxsuit == 7)
                        PARAMS->DefineID.TypeSpecificID = 1406311;
            else if (skinxsuit == 8)
                        PARAMS->DefineID.TypeSpecificID = 1406971;
            if (skinset == 1)
                        PARAMS->DefineID.TypeSpecificID = 1400687;
            else if (skinset == 2)
                        PARAMS->DefineID.TypeSpecificID = 1400782;
            else if (skinset == 3)
                        PARAMS->DefineID.TypeSpecificID = 1405092;
            
}

if (strstr(strWeaponId.c_str(), "2200101"))
{

             if (skinemote == 1)
         PARAMS->DefineID.TypeSpecificID = 12219710;
            else if (skinemote == 2)
         PARAMS->DefineID.TypeSpecificID = 12219712;
            else if (skinemote == 3)
         PARAMS->DefineID.TypeSpecificID = 12219711;
            else if (skinemote == 4)
        PARAMS->DefineID.TypeSpecificID = 12219713;
            
}




if (strstr(strWeaponId.c_str(), "101102"))
{

             if (skinsace32 == 1)
                        PARAMS->DefineID.TypeSpecificID = 1101102007;
                else if (skinsace32 == 2)
                        PARAMS->DefineID.TypeSpecificID = 1101102017;

}

if (strstr(strWeaponId.c_str(), "150200"))
{

             if (skinhelmet == 1)
                        PARAMS->DefineID.TypeSpecificID = 1502003014;
            else if (skinhelmet == 1)
                        PARAMS->DefineID.TypeSpecificID = 1502003014;
            else if (skinhelmet == 1)
                        PARAMS->DefineID.TypeSpecificID = 1502003014;
             if (skinhelmet == 2)
                        PARAMS->DefineID.TypeSpecificID = 1502003023;
            else if (skinhelmet == 2)
                        PARAMS->DefineID.TypeSpecificID = 1502003023;
            else if (skinhelmet == 2)
                        PARAMS->DefineID.TypeSpecificID = 1502003023;
            
}

if (strstr(strWeaponId.c_str(), "102002"))
{

            if (skinump45 == 1)
PARAMS->DefineID.TypeSpecificID = 1102002043; 
if (skinump45 == 2)
PARAMS->DefineID.TypeSpecificID = 1102002053; 
if (skinump45 == 3)
PARAMS->DefineID.TypeSpecificID = 1102002061; 
if (skinump45 == 4)
PARAMS->DefineID.TypeSpecificID = 1102002070; 
if (skinump45 == 5)
PARAMS->DefineID.TypeSpecificID = 1102002030; 
if (skinump45 == 6)
PARAMS->DefineID.TypeSpecificID = 1102002090; 
if (skinump45 == 7)
PARAMS->DefineID.TypeSpecificID = 1102002136; 

}

if (strstr(strWeaponId.c_str(), "101003"))
{

            if (skinm249 == 1)
PARAMS->DefineID.TypeSpecificID = 1105001034; 
if (skinm249 == 2)
PARAMS->DefineID.TypeSpecificID = 1105001020; 
if (skinm249 == 3)
PARAMS->DefineID.TypeSpecificID = 1105001048; 

}

if (strstr(strWeaponId.c_str(), "101003"))
{

            if (skinqbz == 1)
PARAMS->DefineID.TypeSpecificID = 1101007025; 
if (skinqbz == 2)
PARAMS->DefineID.TypeSpecificID = 1101007036; 
if (skinqbz == 3)
PARAMS->DefineID.TypeSpecificID = 1101007046; 

}

if (strstr(strWeaponId.c_str(), "101003"))
{

            if (skinm24 == 1)
PARAMS->DefineID.TypeSpecificID = 1103002018; 
if (skinm24 == 2)
PARAMS->DefineID.TypeSpecificID = 1103002030; 
if (skinm24 == 3)
PARAMS->DefineID.TypeSpecificID = 1103002049; 
if (skinm24 == 4)
PARAMS->DefineID.TypeSpecificID = 1103002047; 
if (skinm24 == 5)
PARAMS->DefineID.TypeSpecificID = 1103002059; 

}

if (strstr(strWeaponId.c_str(), "101008"))
{

            if (skinm7 == 1)
PARAMS->DefineID.TypeSpecificID = 1101008026; 
if (skinm7 == 2)
PARAMS->DefineID.TypeSpecificID = 1101008116; 
if (skinm7 == 3)
PARAMS->DefineID.TypeSpecificID = 1101008070; 
if (skinm7 == 4)
PARAMS->DefineID.TypeSpecificID = 1101008036; 
if (skinm7 == 5)
PARAMS->DefineID.TypeSpecificID = 1101008051; 
if (skinm7 == 6)
PARAMS->DefineID.TypeSpecificID = 1101008104; 
if (skinm7 == 7)
PARAMS->DefineID.TypeSpecificID = 1101008081; 

}

if (strstr(strWeaponId.c_str(), "101002"))
{

            if (skinm16a4 == 1)
PARAMS->DefineID.TypeSpecificID = 1101002029; 
if (skinm16a4 == 2)
PARAMS->DefineID.TypeSpecificID = 1101002056; 
if (skinm16a4 == 3)
PARAMS->DefineID.TypeSpecificID = 1101002068; 
if (skinm16a4 == 4)
PARAMS->DefineID.TypeSpecificID = 1101002081; 


}

if (strstr(strWeaponId.c_str(), "102001"))
{

            if (skinawm == 1)
PARAMS->DefineID.TypeSpecificID = 1103003022; 
if (skinawm == 2)
PARAMS->DefineID.TypeSpecificID = 1103003030; 
if (skinawm == 3)
PARAMS->DefineID.TypeSpecificID = 1103003042; 
if (skinawm == 4)
PARAMS->DefineID.TypeSpecificID = 1103003062; 

}

if (strstr(strWeaponId.c_str(), "102001"))
{

            if (skinuzi == 1)
PARAMS->DefineID.TypeSpecificID = 1102001024; 
if (skinuzi == 2)
PARAMS->DefineID.TypeSpecificID = 1102001036; 
if (skinuzi == 3)
PARAMS->DefineID.TypeSpecificID = 1102001058; 
if (skinuzi == 4)
PARAMS->DefineID.TypeSpecificID = 1102001069; 

}

if (strstr(strWeaponId.c_str(), "101005"))
{

            if (skingroza == 1)
PARAMS->DefineID.TypeSpecificID = 1101005019; 
if (skingroza == 2)
PARAMS->DefineID.TypeSpecificID = 1101005052; 
if (skingroza == 3)
PARAMS->DefineID.TypeSpecificID = 1101005025; 
if (skingroza == 4)
PARAMS->DefineID.TypeSpecificID = 1101005038; 


}
if (strstr(strWeaponId.c_str(), "101003"))
{

            if (skinpan == 1)
PARAMS->DefineID.TypeSpecificID = 1108004125; 
if (skinpan == 2)
PARAMS->DefineID.TypeSpecificID = 1108004145; 
if (skinpan == 3)
PARAMS->DefineID.TypeSpecificID = 1108004160; 
if (skinpan == 4)
PARAMS->DefineID.TypeSpecificID = 1108004337; 
if (skinpan == 5)
PARAMS->DefineID.TypeSpecificID = 1108004283; 

}
if (strstr(strWeaponId.c_str(), "101003"))
{

            if (skinscar == 1)
PARAMS->DefineID.TypeSpecificID = 1101003057; 
if (skinscar == 2)
PARAMS->DefineID.TypeSpecificID = 1101003070; 
if (skinscar == 3)
PARAMS->DefineID.TypeSpecificID = 1101003080; 
if (skinscar == 4)
PARAMS->DefineID.TypeSpecificID = 1101003099; 
if (skinscar == 5)
PARAMS->DefineID.TypeSpecificID = 1101003119; 
if (skinscar == 6)
PARAMS->DefineID.TypeSpecificID = 1101003146; 

}

if (strstr(strWeaponId.c_str(), "101001"))
{

            if (skinakm == 1)
PARAMS->DefineID.TypeSpecificID = 1101001089; 
if (skinakm == 2)
PARAMS->DefineID.TypeSpecificID = 1101001063; 
if (skinakm == 3)
PARAMS->DefineID.TypeSpecificID = 1101001068; 
if (skinakm == 4)
PARAMS->DefineID.TypeSpecificID = 1101001042; 
if (skinakm == 5)
PARAMS->DefineID.TypeSpecificID = 1101001103; 
if (skinakm == 6)
PARAMS->DefineID.TypeSpecificID = 1101001116; 
if (skinakm == 7)
PARAMS->DefineID.TypeSpecificID = 1101001128;      
else if (skinakm == 8)
PARAMS->DefineID.TypeSpecificID = 1101001143;               
else if (skinakm == 9)
PARAMS->DefineID.TypeSpecificID = 1101001174;
else if (skinakm == 10)
PARAMS->DefineID.TypeSpecificID = 1101001213; 
else if (skinakm == 11)
PARAMS->DefineID.TypeSpecificID = 1101001023;
            
}
if (strstr(strWeaponId.c_str(), "150100"))
{

             if (skinbackpack == 1)
                        PARAMS->DefineID.TypeSpecificID = 1501003174;
            else if (skinbackpack == 2)
                        PARAMS->DefineID.TypeSpecificID = 1501003220;
            else if (skinbackpack == 3)
                        PARAMS->DefineID.TypeSpecificID = 1501003058;         
            else if (skinbackpack == 3)
                        PARAMS->DefineID.TypeSpecificID = 1501003061;                  
}
if (strstr(strWeaponId.c_str(), "203004")) 
{                  
                        if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040466; 
                       
                    } 
                    if (strstr(strWeaponId.c_str(), "203014")) 
{                  
                        if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040467;  
                       
                    } 
                    if (strstr(strWeaponId.c_str(), "203003"))
{                  
                        if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040468; 
                       
                    } 
                    if (strstr(strWeaponId.c_str(), "203002")) 
{                  
                        if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040469;  
                       
                    } 
                    if (strstr(strWeaponId.c_str(), "203001"))
{                  
                        if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040470; 
                       
                    }

if (strstr(strWeaponId.c_str(), "101004"))
{

if (skinm4 == 1) 
                            
                            PARAMS->DefineID.TypeSpecificID = 1101004046; 
                            
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1101004062; 
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1101004086; 
                          else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1101004078;
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1101004098; 
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1101004163; 
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1101004201; 
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1101004138;
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1101004209; 
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1101004218; 
                            
                            
}

if (strstr(strWeaponId.c_str(), "205002"))
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040443; 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040623; 
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040863; 
                          else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040783; 
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040983;
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041633;
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042013; 
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041383;
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042093;
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042183; 
                            
}

if (strstr(strWeaponId.c_str(), "205005"))
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040443; 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040623; 
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040863; 
                          else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040783;
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040983; 
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041633; 
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042013;
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041383;
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042093; 
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042183; 
                            
}

if (strstr(strWeaponId.c_str(), "203008"))
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040442; 
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040622;
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040862; 
                          else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040782;
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040982; 
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041632; 
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042012; 
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041382;
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042092; 
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042182; 
                            
}

if (strstr(strWeaponId.c_str(), "291004"))
{
if (skinm4 == 1) 
                            PARAMS->DefineID.TypeSpecificID = 1010040441;  
                        else if (skinm4 == 2) 
                            PARAMS->DefineID.TypeSpecificID = 1010040621; 
                        else if (skinm4 == 3) 
                            PARAMS->DefineID.TypeSpecificID = 1010040861; 
                          else if (skinm4 == 4) 
                            PARAMS->DefineID.TypeSpecificID = 1010040781; 
                       else if (skinm4 == 5) 
                            PARAMS->DefineID.TypeSpecificID = 1010040981; 
                            else if (skinm4 == 6) 
                            PARAMS->DefineID.TypeSpecificID = 1010041631;
                             else if (skinm4 == 7) 
                            PARAMS->DefineID.TypeSpecificID = 1010042011; 
                            else if (skinm4 == 8) 
                            PARAMS->DefineID.TypeSpecificID = 1010041381; 
                            else if (skinm4 == 9) 
                            PARAMS->DefineID.TypeSpecificID = 1010042091; 
                            else if (skinm4 == 10) 
                            PARAMS->DefineID.TypeSpecificID = 1010042181; 
                            
}




}

        const char *pBroadCast = ("Function ShadowTrackerExtra.STExtraPlayerController.BroadcastFatalDamageToClientWithStruct");
    if (pFunc) {
        if (pFunc->GetFullName() == pBroadCast) {
            ASTExtraPlayerController *pController = (ASTExtraPlayerController *) pObj;
            if (pController) {
                auto Params = (ASTExtraPlayerController_BroadcastFatalDamageToClientWithStruct_Params *) pArgs;
                if (Params) {
    auto GWorld = GetWorld();
    if (GWorld){
        if (GWorld->NetDriver->ServerConnection)
            if(GWorld->NetDriver->ServerConnection->PlayerController){
    ASTExtraPlayerController *localController = (ASTExtraPlayerController *)GWorld->NetDriver->ServerConnection->PlayerController;
    ASTExtraPlayerCharacter *localPlayer = (ASTExtraPlayerCharacter *)localController->AcknowledgedPawn;
                if(localController->PlayerKey == Params->FatalDamageParameter.CauserKey && !localController->STExtraBaseCharacter->CurrentVehicle && localPlayer->WeaponManagerComponent->CurrentWeaponReplicated){
                     if (skinxsuit == 1)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1405909; 
                    if (skinxsuit == 2)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1405628;
                    if (skinxsuit == 3)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406152; 
                    if (skinxsuit == 4)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406475; 
                    if (skinxsuit == 5)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1405983;
                    if (skinxsuit == 6)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406638; 
                    if (skinxsuit == 7)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406311; 
                    if (skinxsuit == 8)
                    Params->FatalDamageParameter.CauserClothAvatarID =  1406971;
                    
                    





                    
                    if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AKM")){
                        if (skinakm == 1)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001089; 
                        if (skinakm == 2)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001063; 
                        if (skinakm == 3)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001068; 
                        if (skinakm == 4)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001042; 
                        if (skinakm == 5)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001101; 
                        if (skinakm == 6)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001116; 
                        if (skinakm == 7)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001128;           
                        else if (skinakm == 8)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001143;             
                        else if (skinakm == 9)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001174;
                       else if (skinakm == 10)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001213;
                        else if (skinakm == 11)
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101001023;
                    }                    
                    
                    
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M416")){                  
                        if (skinm4 == 1) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004046; 
                        else if (skinm4 == 2) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004062; 
                        else if (skinm4 == 3) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004086; 
                          else if (skinm4 == 4) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004218;
                       else if (skinm4 == 5) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004098; 
                            else if (skinm4 == 6) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004163; 
                            else if (skinm4 == 7) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004201; 
                            else if (skinm4 == 8) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004138;
                            else if (skinm4 == 9) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004209; 
                            else if (skinm4 == 10) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101004218; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "ACE32")){
                    if (skinsace32 == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1101102007; 
}
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SCAR-L")){
                           if (skinscar == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003057;
                       else if (skinscar == 2) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003070; 
                         else if (skinscar == 3) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003080;
                         else if (skinscar == 4) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003099; 
                            else if (skinscar == 5) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003119;
                            else if (skinscar == 6) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101003146;
                            
                        
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M762")){                  
                      if (skinm7 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008026; 
                       else if (skinm7 == 2) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008116;
                         else if (skinm7 == 3) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008070; 
                         else if (skinm7 == 4) 
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008036;
                            else if (skinm7 == 5)
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008051; 
                            else if (skinm7 == 6)
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008104;
                            else if (skinm7 == 7)
                            Params->FatalDamageParameter.CauserWeaponAvatarID = 1101008081; 
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "GROZA")){
                    if (skingroza == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005019;
                        if (skingroza == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005052;
                        if (skingroza == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005025; 
                        if (skingroza == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101005038; 
                        }
                    
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UZI")){

if (skinuzi == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001024; 
                        if (skinuzi == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001036; 
                        if (skinuzi == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001058; 
                        if (skinuzi == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102001069; 
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "UMP45")){

                      if (skinump45 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002043;
                        if (skinump45 == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002053;
                        if (skinump45 == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002061; 
                        if (skinump45 == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002070; 
                        if (skinump45 == 5) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002030; 
                        if (skinump45 == 6) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002090; 
                        if (skinump45 == 7) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102002136; 
                        
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vector")){

                        if (skinvector == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003020;
                        if (skinvector == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003031;
                        if (skinvector == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003039; 
                        if (skinvector == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003072; 
                        if (skinvector == 5) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102003060; 
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Thompson")){

                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102004018; 
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "PP-19 Bizon")){

if (skinbizon == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102005007;
                        if (skinbizon == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1102005020;
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Kar98K")){

                        if (skinkar == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001060;
                        if (skinkar == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001079;
                        if (skinkar == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001085; 
                        if (skinkar == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103001101;                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M24")){

                        if (skinm24 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002018;
                        if (skinm24 == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002030;
                        if (skinm24 == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002049; 
                        if (skinm24 == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002047; 
                        if (skinm24 == 5) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103002059; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AWM")){

                        if (skinawm == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003022;
                        if (skinawm == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003030;
                        if (skinawm == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003042; 
                        if (skinawm == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103003062; 
                       
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "DP28")){

                        if (skindp28 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1105002018;
                        if (skindp28 == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1105002035;
                        
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M16A4")){
                    if (skinm16a4 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002029;
                        if (skinm16a4 == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002056;
                        if (skinm16a4 == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002068; 
                        if (skinm16a4 == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101002081; 
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "QBZ")){
                        if (skinqbz == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007025;
                        if (skinqbz == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007036;
                        if (skinqbz == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007046;
                        
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "M249")){
                                                if (skinm249== 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1105001034;
                        if (skinm249== 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1105001020;
                        if (skinm249== 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1105001048;
                        
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Mini 14")){
                        if (skinm16a4 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101007025;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SLR")){
                        if (skinslr == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103009022;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "SKS")){
                        if (skinsks == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103004037;
                        if (skinsks == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103004046;
                        if (skinsks == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103004058; 
                        }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Pan")){

                        if (skinpan == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004125;
                        if (skinpan == 2) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004145;
                        if (skinpan == 3) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004160; 
                         if (skinpan == 4) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004337; 
                        if (skinpan == 5) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1108004283; 
                        
                      
                    }
                    else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "Vss")){
                    if (skinvss == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103005024;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "MK14")){
                    if (skinmk14 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1103007020;
                        }
                        else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S1897")){
                        if (skins1897 == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1104002022;
}
else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "AUG")){
                    if (skinaug == 1) 
                        Params->FatalDamageParameter.CauserWeaponAvatarID = 1101006033;
                        }

else if(strstr(localPlayer->WeaponManagerComponent->CurrentWeaponReplicated->GetWeaponName().ToString(), "S12K")){
if (skins12k == 1) 
Params->FatalDamageParameter.CauserWeaponAvatarID = 1104003026;
}}}}}}}
return oProcessEvent(pObj, pFunc, pArgs);
}
        }


[[noreturn]] void *bypass_thread(void *) {
while (true) {
auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();



auto localPlayer = g_LocalPlayer;
auto localController = g_LocalController;
if (localPlayer && localController) {
//================================================================================================//
if (Config.HighRisk.Recoil || Config.HighRisk.HitEffect || Config.HighRisk.Cross || Config.HighRisk.Shake) {
auto WeaponManagerComponent = g_LocalPlayer->WeaponManagerComponent;
if (WeaponManagerComponent) {
auto CurrentWeaponReplicated = (ASTExtraShootWeapon *) WeaponManagerComponent->CurrentWeaponReplicated;
if (CurrentWeaponReplicated) {
auto ShootWeaponEntityComp = CurrentWeaponReplicated->ShootWeaponEntityComp;
auto ShootWeaponEffectComp = CurrentWeaponReplicated->ShootWeaponEffectComp;
if (ShootWeaponEntityComp && ShootWeaponEffectComp) {
if (Config.HighRisk.Recoil) {
memset(&ShootWeaponEntityComp->DeviationInfo, 0, sizeof(FSDeviation));
        ShootWeaponEntityComp->ShotGunCenterPerc = 0.1f;
        ShootWeaponEntityComp->ShotGunVerticalSpread = 0.1f;
        ShootWeaponEntityComp->ShotGunHorizontalSpread = 0.1f;

        ShootWeaponEntityComp->GameDeviationFactor = 0.0f;

        ShootWeaponEntityComp->GameDeviationAccuracy = 0.1f;
        ShootWeaponEntityComp->RecoilKickADS = 0.1f;
        ShootWeaponEntityComp->AccessoriesVRecoilFactor = 0.1f;
        ShootWeaponEntityComp->AccessoriesHRecoilFactor = 0.1f;
        ShootWeaponEntityComp->bRecordHitDetail = false;
}
//================================================================================================//
if (Config.HighRisk.rp) {
  auto Actors = getActors();
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor))
                continue;

            if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
                auto SDK_ASTExtraPlayerCharacter = (ASTExtraPlayerController *) Actor;
    
    SDK_ASTExtraPlayerCharacter->bShouldReportAntiCheat = 0;
    SDK_ASTExtraPlayerCharacter->bUseAntiDataReportFilter = 0;
    SDK_ASTExtraPlayerCharacter->bUseAntiDataReportFilterNew = 0;
    SDK_ASTExtraPlayerCharacter->bUseAntiDataReportFilterCheck = 0;
    SDK_ASTExtraPlayerCharacter->LastReportAntiDataTime = 0;
    SDK_ASTExtraPlayerCharacter->bEnableDSErrorLogReport = 0;
    }}}
//================================================================================================//
 if (Config.HighRisk.Shake) {
        ShootWeaponEffectComp->CameraShakeInnerRadius = 0.0f;
        ShootWeaponEffectComp->CameraShakeOuterRadius = 0.0f;
        ShootWeaponEffectComp->CameraShakFalloff = 0.0f;
        }
//================================================================================================//
if (Config.HighRisk.Cross) {
ShootWeaponEntityComp->GameDeviationFactor = 0.0f;
}
//================================================================================================//
if (Config.HighRisk.HitEffect) {
ShootWeaponEntityComp->ExtraHitPerformScale = 1.0f;
                                    ShootWeaponEntityComp->HUDAlphaDecreaseSpeedScale = -80.0f;
}
//================================================================================================//
if (Config.HighRisk.Damage) {
                                    ShootWeaponEntityComp->BulletMomentum = 10000000.0f;
                                    ShootWeaponEntityComp->BulletRange = 10000000.0f;
                                    ShootWeaponEntityComp->BaseImpactDamage = 100000000.0f;
                                    ShootWeaponEntityComp->MaxDamageRate = 100000000.0f;
									ShootWeaponEntityComp->BulletTrackDistanceFix = 100000000.0f;

                                }
//================================================================================================//
}
}
}
}
}

auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td), SLEEP_TIME)));
}
return 0;
}


#define SLEEP_TIME 1000LL / 60LL
[[noreturn]] void *maps_thread(void *) {
while (true) {
auto t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();


std::vector<sRegion> tmp;
char line[512];
FILE *f = fopen("/proc/self/maps", "r");;
if (f) {
while (fgets(line, sizeof line, f)) {
uintptr_t start, end;
char tmpProt[16];
if (sscanf(line, "%" PRIXPTR "-%" PRIXPTR " %16s %*s %*s %*s %*s", &start, &end, tmpProt) > 0) {
if (tmpProt[0] != 'r') {
tmp.push_back({start, end});
}
}
}
fclose(f);
}
trapRegions = tmp;
auto objs = UObject::GetGlobalObjects();
for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i);
if (isObjectInvalid(Object))
continue;
if (WideView) {
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainYFOV;
}}else
if (Object->IsA(ULocalPlayer::StaticClass())) {
auto playerChar = (ULocalPlayer *) Object;
playerChar->AspectRatioAxisConstraint = EAspectRatioAxisConstraint::AspectRatio_MaintainXFOV;
}
//================================================================================================//
if (Config.HighRisk.Unlock2) {
auto objs = UObject::GetGlobalObjects(); for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i); if (isObjectInvalid(Object)) continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
auto playerChar = (USTExtraGameInstance *) Object;  
playerChar->UserDetailSetting.PUBGDeviceFPSLow = 120;
}}}
//================================================================================================//
if (Config.HighRisk.Unlock3) {
auto objs = UObject::GetGlobalObjects(); for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i); if (isObjectInvalid(Object)) continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
auto playerChar = (USTExtraGameInstance *) Object;  
playerChar->UserDetailSetting.PUBGDeviceFPSLow = 144;
}}}
//================================================================================================//
if (Config.HighRisk.Unlock1) {
auto objs = UObject::GetGlobalObjects(); for (int i = 0; i < objs.Num(); i++) {
auto Object = objs.GetByIndex(i); if (isObjectInvalid(Object)) continue;
if (Object->IsA(USTExtraGameInstance::StaticClass())) {
auto playerChar = (USTExtraGameInstance *) Object;  
playerChar->UserDetailSetting.PUBGDeviceFPSLow = 90;
}}}
}
//================================================================================================//
auto td = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - t1;
std::this_thread::sleep_for(std::chrono::milliseconds(std::max(std::min(0LL, SLEEP_TIME - td),SLEEP_TIME)));
}
}

void *main_thread(void *) {
system("adb shell am compat disable BLOCK_UNTRUSTED_TOUCHES com.vng.pubgmobile");
UE4 = Tools::GetBaseAddress("libUE4.so");
while (!UE4) {
UE4 = Tools::GetBaseAddress("libUE4.so");
sleep(1);
}
anogs = Tools::GetBaseAddress("libanogs.so");
while (!anogs) {
anogs = Tools::GetBaseAddress("libanogs.so");
sleep(1);
}

while (!g_App) {
g_App = *(android_app **) (UE4 + GNativeAndroidApp_Offset);
sleep(1);
}

while (!g_App->onInputEvent)
sleep(1);

orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
g_App->onInputEvent = onInputEvent;

FName::GNames = GetGNames();
while (!FName::GNames) {
FName::GNames = GetGNames();
sleep(1);
}
UObject::GUObjectArray = (FUObjectArray *) (UE4 + GUObject_Offset);

void* xhook = dlopen_ex("libEGL.so", 0B100);
    while (!xhook) {
    xhook = dlopen_ex("libEGL.so", 0B100);
    sleep(1);
}
   void* 函数地址 = dlsym_ex(xhook, "eglSwapBuffers");
   xhook_register(".*\\.so$", "eglSwapBuffers", (void *) _eglSwapBuffers, (void **) &orig_eglSwapBuffers);
   xhook_refresh(0);
    
pthread_t t;
pthread_create(&t, 0, maps_thread, 0);

items_data = json::parse(JSON_ITEMS);

return 0;
}
__attribute__((constructor)) void _init() {
pthread_t t;
pthread_create(&t, 0, main_thread, 0);
pthread_create(&t, 0, bypass_thread, 0);
}
__attribute__((constructor))

void lib_main() {
pthread_t ptid;
}
//==========================================END===================================================//