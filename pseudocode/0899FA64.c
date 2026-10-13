/* Entry 0x0899FA64 | file offset 0x0019CA3C | FUN_0899fa64 | bytes 164 */

int FUN_0899fa64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0x10;
  DAT_09af67e0 = 0;
  local_1c = param_3;
  local_18 = param_4;
  local_14 = param_5;
  if (param_1 == 1) {
    iVar1 = sceGeListEnQueueHead(param_2,0,DAT_09af6808,&local_20);
  }
  else {
    iVar1 = sceGeListEnQueue(param_2,0,DAT_09af6808,&local_20);
  }
  iVar2 = iVar1;
  if (-1 < iVar1) {
    iVar2 = 0;
    DAT_09af6804 = iVar1;
  }
  return iVar2;
}

