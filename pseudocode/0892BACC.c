/* Entry 0x0892BACC | file offset 0x00128AA4 | FUN_0892bacc | bytes 380 */

void FUN_0892bacc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  undefined4 in_t3;
  undefined4 uStackX_0;
  char cStackX_4;
  
  FUN_0892b084(param_2 + *(int *)(param_2 + 0x198) * 0x44 + 0x44);
  iVar1 = *(int *)(param_2 + 0x198) * 0xc;
  FUN_0892b1a0(param_1,param_2 + *(int *)(param_2 + 0x198) * 0x44 + 0x44,
               *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x34),
               *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38),
               *(undefined4 *)(param_2 + 0x3c),*(undefined2 *)(&DAT_089cece0 + iVar1),in_t0,
               *(undefined2 *)(&DAT_089cece2 + iVar1),*(undefined2 *)(&DAT_089cece4 + iVar1),
               *(undefined2 *)(&DAT_089cece6 + iVar1),*(undefined2 *)(&DAT_089cece8 + iVar1),in_t3,
               uStackX_0,in_t1,in_t2);
  iVar1 = *(int *)(param_2 + 0x198);
  if (cStackX_4 != '\0') {
    FUN_0892b51c(param_2 + iVar1 * 0x44 + 0x44);
    iVar1 = *(int *)(param_2 + 0x198);
  }
  if (0 < iVar1) {
    FUN_0892b4f4(param_2 + iVar1 * 0x44 + 0x44);
    iVar1 = *(int *)(param_2 + 0x198);
  }
  *(int *)(param_2 + 0x198) = iVar1 + 1;
  return;
}

