/* Entry 0x088ABBF4 | file offset 0x000A8BCC | FUN_088abbf4 | bytes 392 */

void FUN_088abbf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x254);
  if (iVar2 == param_1 + 0xf08) {
    iVar2 = FUN_088ab7c0(param_1);
    if (iVar2 != 0) {
      FUN_088ab800(param_1,0);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0xef4);
    iVar4 = 1;
    if (iVar3 == 1) {
      iVar4 = FUN_088ac49c(param_1,iVar2,0);
    }
    else if (iVar3 == 2) {
      iVar4 = FUN_088ac5b4(param_1,iVar2,0);
    }
    else if (iVar3 == 3) {
      iVar4 = FUN_088ac6cc(param_1,iVar2);
    }
    if (iVar4 != 0) {
      FUN_088ab800(param_1,0);
    }
  }
  FUN_088f4c4c(param_1 + 0x1fdd8);
  FUN_088f40f0(param_1 + 0x1e208,0);
  uVar5 = sceKernelGetSystemTimeWide();
  uVar1 = FUN_0899924c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000000,0);
  *(undefined4 *)(param_1 + 0xea8) = uVar1;
  iVar2 = FUN_0885c304(DAT_089d4e14);
  if (iVar2 == 1) {
    *DAT_089d726c = *DAT_089d726c | 0x2000000;
  }
  else {
    *DAT_089d726c = *DAT_089d726c & 0xfdffffff;
  }
  if (DAT_089d5f20 != '\0') {
    FUN_088ba34c();
  }
  return;
}

