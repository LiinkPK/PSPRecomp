/* Entry 0x088A7234 | file offset 0x000A420C | FUN_088a7234 | bytes 80 */

void FUN_088a7234(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0xd4) == 3) && (iVar1 = FUN_088a751c(param_1), iVar1 == 1)) {
    FUN_088a4a30(*(undefined4 *)(param_1 + 0xcc));
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd8);
  }
  return;
}

