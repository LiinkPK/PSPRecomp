/* Entry 0x088955B8 | file offset 0x00092590 | FUN_088955b8 | bytes 324 */

void FUN_088955b8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    uVar3 = *(undefined4 *)(DAT_089d6d80 + 8);
    FUN_08941210(uVar3,*(undefined1 *)(param_1 + 0x45));
    FUN_089a0384(4);
    FUN_089a0384(9);
    FUN_089a03dc(3);
    FUN_089a03dc(1);
    FUN_089a03dc(10);
    FUN_089a03dc(7);
    FUN_089a119c(1);
    FUN_089a12a4(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
                 *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined4 *)(param_1 + 0x40));
    iVar1 = FUN_08941250(uVar3);
    iVar2 = FUN_0894125c(uVar3);
    FUN_08866f50((float)*(int *)(param_1 + 0x1c) / (float)iVar1,
                 (float)*(int *)(param_1 + 0x20) / (float)iVar2,
                 (float)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x24)) / (float)iVar1,
                 (float)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x28)) / (float)iVar2,
                 *(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),
                 *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14),
                 *(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x2c)
                );
    FUN_089a119c(0);
    FUN_089a0df4(7,1);
  }
  return;
}

