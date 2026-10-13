/* Entry 0x08832034 | file offset 0x0002F00C | FUN_08832034 | bytes 284 */

void FUN_08832034(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 local_24;
  
  iVar3 = -1;
  iVar2 = FUN_08838074();
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_3 + 0x180);
    if (sVar1 < 0x227) {
      if (0x225 < sVar1) {
        iVar3 = 0x227;
      }
    }
    else if (sVar1 < 0x228) {
      iVar3 = 0x226;
    }
  }
  if ((iVar3 < 0) && (iVar3 = 0x227, (*(uint *)(param_3 + 0x38c) & 1) != 0)) {
    iVar3 = 0x226;
  }
  FUN_089a3868(auStack_30,param_4);
  local_2c = param_1;
  local_24 = param_2;
  func_0x08a58a5c(param_3,auStack_30);
  *(uint *)(param_4 + 0x28) = *(uint *)(param_4 + 0x28) | 1;
  FUN_0882fa10(0,0,param_3 + 0x130,iVar3,0);
  FUN_08834934(param_3,0x65,0x66);
  return;
}

