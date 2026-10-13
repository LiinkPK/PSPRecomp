/* Entry 0x088FCD04 | file offset 0x000F9CDC | FUN_088fcd04 | bytes 416 */

void FUN_088fcd04(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  FUN_088d3cf0(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089ccebc);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0xa68);
  if (param_2 == '\0') {
    *(undefined2 *)(iVar1 + 0xe) = 10;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa6c);
  }
  else {
    FUN_088d9f5c(iVar1,10,1);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa6c);
  }
  FUN_088d9f5c(uVar2,0,1);
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_088d46e4(iVar1 + 0x10a0,*(undefined4 *)(iVar1 + 0x10a4),0,*(short *)(iVar1 + 0x18) + -1,
               *(undefined4 *)(iVar1 + 0x10b0),9);
  puVar3 = (uint *)(*(int *)(param_1 + 0x30) + 0x10a0);
  *puVar3 = *puVar3 | 4;
  FUN_0887b924(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef0));
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar1 + 0xef4) != 0) {
    FUN_0887ba5c(*(int *)(iVar1 + 0xef4));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef4) = 0;
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (*(int *)(iVar1 + 0xef8) != 0) {
    FUN_0887ba5c(*(int *)(iVar1 + 0xef8));
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef8) = 0;
    iVar1 = *(int *)(param_1 + 0x30);
  }
  uVar2 = FUN_0887b3ec(*(undefined4 *)(iVar1 + 0xedc),*(undefined4 *)(iVar1 + 0xee0),0,
                       (int)*(short *)(iVar1 + 0x14),0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef4) = uVar2;
  uVar2 = FUN_0887e534(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef4));
  *(undefined4 *)(*(int *)(param_1 + 0x30) + 0xef8) = uVar2;
  FUN_088fcea4(param_1);
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(short *)(iVar1 + 0x18) < 10) {
    FUN_088d9cfc(*(undefined4 *)(iVar1 + 0xa78));
    FUN_088d9cfc(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa7c));
    FUN_088d9cfc(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa70));
    FUN_088d9cfc(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa74));
    iVar1 = *(int *)(param_1 + 0x30);
  }
  *(undefined4 *)(iVar1 + 8) = 2;
  FUN_088fba24(param_1);
  return;
}

