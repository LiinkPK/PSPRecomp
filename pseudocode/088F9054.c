/* Entry 0x088F9054 | file offset 0x000F602C | FUN_088f9054 | bytes 160 */

void FUN_088f9054(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_088f0afc(3,1);
  *(float *)(param_1 + 0x85c) = (float)iVar2 / 100.0;
  uVar3 = FUN_088f0c18(5);
  *(undefined4 *)(param_1 + 0x860) = uVar3;
  uVar3 = FUN_088f0c18(4);
  *(undefined4 *)(param_1 + 0x864) = uVar3;
  iVar2 = FUN_088f0afc(2,1);
  *(float *)(param_1 + 0x868) = (float)iVar2 / 100.0;
  uVar1 = FUN_088f0afc(0,1);
  *(undefined2 *)(param_1 + 0x86c) = uVar1;
  uVar1 = FUN_088f0afc(1,1);
  *(undefined2 *)(param_1 + 0x86e) = uVar1;
  return;
}

