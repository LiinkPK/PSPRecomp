/* Entry 0x08850BE0 | file offset 0x0004DBB8 | FUN_08850be0 | bytes 336 */

int FUN_08850be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  FUN_0883975c(param_1,3,param_2);
  *(undefined **)(param_1 + 0x544) = &DAT_089c8ad8;
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  *(undefined2 *)(param_1 + 0x5f4) = 0xffff;
  *(undefined2 *)(param_1 + 0x60a) = 0xffff;
  *(undefined1 *)(param_1 + 0x60e) = 0;
  *(undefined1 *)(param_1 + 0x60f) = 0;
  *(undefined1 *)(param_1 + 0x611) = 0;
  *(undefined1 *)(param_1 + 0x612) = 0;
  *(undefined1 *)(param_1 + 0x613) = 0;
  *(undefined1 *)(param_1 + 0x614) = 0;
  FUN_089a3ebc(param_1 + 0x550);
  *(undefined2 *)(param_1 + 0x5f6) = 0xffff;
  iVar2 = 0;
  iVar3 = param_1;
  do {
    *(undefined2 *)(iVar3 + 0x5f8) = 0xffff;
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 2;
  } while (iVar2 < 8);
  *(undefined2 *)(param_1 + 0x608) = 0;
  FUN_088371c4(param_1);
  uVar1 = FUN_088312d0(param_1,0x100);
  *(undefined4 *)(param_1 + 0x314) = uVar1;
  FUN_08834934(param_1,0xffffffff,0xffffffff);
  FUN_08834bb8(param_1,0,0);
  iVar2 = FUN_088312d0(param_1,0x60);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x3a8) = iVar3;
  FUN_0884bb48(param_1 + 0x5d8,param_1,param_3);
  iVar3 = DAT_089d4958;
  piVar4 = (int *)(DAT_089d4958 + 0x24);
  if (*(int *)(DAT_089d4958 + 0x28) == 0) {
    *(int *)(DAT_089d4958 + 0x28) = param_1;
    *piVar4 = param_1;
    *(undefined4 *)(param_1 + 0x5f0) = 0;
  }
  else {
    *(int *)(*(int *)(DAT_089d4958 + 0x28) + 0x5f0) = param_1;
    *(undefined4 *)(param_1 + 0x5f0) = 0;
    *(int *)(iVar3 + 0x28) = param_1;
  }
  return param_1;
}

