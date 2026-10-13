/* Entry 0x0888B21C | file offset 0x000881F4 | FUN_0888b21c | bytes 392 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0888b21c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  func_0x08acef94(_DAT_08acf110);
  func_0x08ac9034(_DAT_08aca350);
  func_0x08b01870(_DAT_08b04ba0);
  func_0x08ab54e4(_DAT_08ab6738);
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (*(int *)(iVar1 + 0x38) != 0) {
      func_0x08ac6080(*(int *)(iVar1 + 0x38) + 0xba0);
      func_0x08aca8b4(*(int *)(iVar1 + 0x38) + 0x784);
      *(uint *)(*(int *)(iVar1 + 0x38) + 0x188) =
           *(uint *)(*(int *)(iVar1 + 0x38) + 0x188) & 0xfffffff7;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 2);
  func_0x08acdc88(_DAT_08acee24);
  func_0x08a3e844(_DAT_08a405e0);
  func_0x08a4ffd8(_DAT_08a50568);
  func_0x08ab54e4(_DAT_08ab6738);
  FUN_0888a19c();
  FUN_08895fe4(DAT_089d6ae8);
  FUN_088885dc(param_1);
  func_0x08a62120(_DAT_08a62280);
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  func_0x08aeef4c(&DAT_09b49140,&local_30,0);
  FUN_089a3868(&DAT_09b491b0,&DAT_09af84c0);
  FUN_089a3868(&DAT_09b491a0,&DAT_09b491b0);
  FUN_089a3868(&DAT_09b49190,&DAT_09b491a0);
  if (*(int *)(param_1 + 0x4c) == 5) {
    func_0x08b13314(_DAT_08b13b48);
  }
  return;
}

