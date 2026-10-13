/* Entry 0x08806B58 | file offset 0x00003B30 | FUN_08806b58 | bytes 60 */

void FUN_08806b58(int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_08805c0c(param_1);
  }
  *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) | 0x80;
  return;
}

