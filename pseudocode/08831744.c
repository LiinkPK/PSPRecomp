/* Entry 0x08831744 | file offset 0x0002E71C | FUN_08831744 | bytes 136 */

void FUN_08831744(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_08837990();
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x394) != 0)) &&
     ((*(uint *)(param_1 + 0x388) & 0x800) == 0)) {
    FUN_0886adbc(*(int *)(param_1 + 0x394),param_1 + 0x330);
  }
  return;
}

