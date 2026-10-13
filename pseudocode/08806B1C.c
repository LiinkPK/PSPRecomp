/* Entry 0x08806B1C | file offset 0x00003AF4 | FUN_08806b1c | bytes 60 */

void FUN_08806b1c(int param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_08805c0c(param_1);
  }
  *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) | 0x40;
  return;
}

