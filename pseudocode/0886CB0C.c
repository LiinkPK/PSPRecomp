/* Entry 0x0886CB0C | file offset 0x00069AE4 | FUN_0886cb0c | bytes 88 */

void FUN_0886cb0c(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  if ((param_2 < 0x19) && (*(int *)(param_1 + param_2 * 4 + 0xa4) != -1)) {
    iVar1 = FUN_089b0e78(*(undefined4 *)(*(int *)(param_1 + 0x84) + 8));
    *(uint *)(iVar1 + 0xc4) = (uint)(param_3 == '\0');
  }
  return;
}

