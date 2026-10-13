/* Entry 0x088620AC | file offset 0x0005F084 | FUN_088620ac | bytes 248 */

void FUN_088620ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,short param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = DAT_089d6c30;
  local_20 = param_2;
  local_1c = param_3;
  FUN_08870b10(param_2,&local_20,&local_1c);
  piVar2 = (int *)FUN_0887b080(0x10);
  piVar4 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    FUN_0887a61c(piVar2);
    piVar4 = piVar2;
  }
  FUN_0887ac24(piVar4,local_20);
  iVar5 = 0;
  if (0 < *piVar4) {
    do {
      uVar3 = FUN_0887afbc(piVar4,iVar5,0);
      FUN_0889f18c(uVar1,(int)param_4,(int)(short)iVar5,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar4);
  }
  if (piVar4 != (int *)0x0) {
    FUN_0887a644(piVar4,3);
  }
  return;
}

