/* Entry 0x088429A4 | file offset 0x0003F97C | FUN_088429a4 | bytes 184 */

void FUN_088429a4(undefined1 *param_1,int param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  
  *param_1 = *(undefined1 *)(param_2 + 1);
  iVar3 = FUN_088cbb10(param_2);
  if (iVar3 == 0) {
    param_1[1] = 0;
  }
  else {
    uVar2 = FUN_088cbad0(param_2);
    param_1[1] = uVar2;
  }
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
  *(float *)(param_1 + 0x18) = (float)(int)*(short *)(param_2 + 6);
  sVar1 = *(short *)(param_2 + 8);
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(float *)(param_1 + 0x1c) = (float)(int)sVar1;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

