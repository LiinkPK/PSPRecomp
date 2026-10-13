/* Entry 0x088316B8 | file offset 0x0002E690 | FUN_088316b8 | bytes 140 */

void FUN_088316b8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08837990();
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x394) != 0)) &&
     ((*(uint *)(param_1 + 0x388) & 0x800) == 0)) {
    FUN_0886accc(*(int *)(param_1 + 0x394),param_1 + 0x330,param_1 + 0x164);
  }
  return;
}

