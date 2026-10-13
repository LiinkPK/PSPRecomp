/* Entry 0x088725A0 | file offset 0x0006F578 | FUN_088725a0 | bytes 156 */

void FUN_088725a0(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_08872594();
  if (iVar1 == 0) {
    uVar3 = FUN_088726b0(param_1);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((*(uint *)((int)param_1 + 0x44) & 2) != 0) {
      *param_1 = uVar3;
    }
    FUN_08871bd0(param_1,uVar2,(int)uVar3,uVar2);
    *(uint *)((int)param_1 + 0x44) = *(uint *)((int)param_1 + 0x44) & 0xfffffffd;
  }
  else {
    FUN_08871b40(param_1);
    *(uint *)((int)param_1 + 0x44) = *(uint *)((int)param_1 + 0x44) | 2;
  }
  return;
}

