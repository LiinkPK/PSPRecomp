/* Entry 0x0887E278 | file offset 0x0007B250 | FUN_0887e278 | bytes 588 */

int FUN_0887e278(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  FUN_08993560(param_1 + 0xa90,0x122,0x58,&LAB_0887d568);
  iVar1 = 0;
  iVar2 = param_1 + 0xa90;
  iVar4 = param_1 + 0x188;
  iVar3 = param_1;
  do {
    *(int *)(iVar3 + 0x180) = iVar2;
    *(int *)(iVar3 + 0x184) = iVar4;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x58;
    iVar3 = iVar3 + 8;
    iVar4 = iVar4 + 8;
  } while (iVar1 < 0x122);
  FUN_08935828(param_1 + 0xa90,0,0x63b0);
  iVar3 = param_1 + 0x180;
  *(int *)(param_1 + 0xa8c) = iVar3;
  *(int *)(param_1 + 0x6e40) = iVar3;
  *(int *)(param_1 + 0x6e44) = iVar3;
  FUN_08993560(param_1 + 0x74b0,0xcd,0x40,&LAB_0887d548);
  iVar4 = 0;
  iVar1 = param_1 + 0x74b0;
  iVar2 = param_1 + 0x6e50;
  iVar3 = param_1;
  do {
    *(int *)(iVar3 + 0x6e48) = iVar1;
    *(int *)(iVar3 + 0x6e4c) = iVar2;
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0x40;
    iVar3 = iVar3 + 8;
    iVar2 = iVar2 + 8;
  } while (iVar4 < 0xcd);
  FUN_08935828(param_1 + 0x74b0,0,0x3340);
  iVar3 = param_1 + 0x6e48;
  *(int *)(param_1 + 0x74ac) = iVar3;
  *(int *)(param_1 + 0xa7f0) = iVar3;
  *(int *)(param_1 + 0xa7f4) = iVar3;
  iVar5 = 0;
  iVar3 = param_1 + 0xb6a8;
  iVar1 = param_1 + 0x10000;
  iVar2 = param_1 + 0xa800;
  iVar4 = param_1 + 0x10000;
  do {
    *(int *)(iVar1 + -0x5808) = iVar3;
    *(int *)(iVar4 + -0x5804) = iVar2;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x18;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + 8;
    iVar4 = iVar4 + 8;
  } while (iVar5 < 0x1d6);
  FUN_08935828(param_1 + 0xb6a8,0,0x2c10);
  iVar3 = param_1 + 43000;
  *(int *)(param_1 + 0xb6a4) = iVar3;
  *(int *)(param_1 + 0xe2b8) = iVar3;
  *(int *)(param_1 + 0xe2bc) = iVar3;
  iVar5 = 0;
  iVar3 = param_1 + 0xe810;
  iVar1 = param_1 + 0x10000;
  iVar2 = param_1 + 0xe2c8;
  iVar4 = param_1 + 0x10000;
  do {
    *(int *)(iVar1 + -0x1d40) = iVar3;
    *(int *)(iVar4 + -0x1d3c) = iVar2;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0x10;
    iVar1 = iVar1 + 8;
    iVar2 = iVar2 + 8;
    iVar4 = iVar4 + 8;
  } while (iVar5 < 0xaa);
  FUN_08935828(param_1 + 0xe810,0,0xaa0);
  iVar3 = param_1 + 0xe2c0;
  *(int *)(param_1 + 0xe80c) = iVar3;
  *(int *)(param_1 + 0xf2b0) = iVar3;
  *(int *)(param_1 + 0xf2b4) = iVar3;
  return param_1;
}

