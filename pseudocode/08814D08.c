/* Entry 0x08814D08 | file offset 0x00011CE0 | FUN_08814d08 | bytes 112 */

void FUN_08814d08(int param_1)

{
  if (*(int *)(param_1 + 0x5f8) != 0) {
    FUN_08842138();
  }
  if (*(int *)(param_1 + 0x5f4) != 0) {
    FUN_0881f068();
    FUN_08842138(*(undefined4 *)(param_1 + 0x5f4));
  }
  FUN_0882117c(param_1 + 0x5dc);
  FUN_08817d18(param_1 + 0x5b0);
  FUN_088223a8(param_1 + 0x570);
  FUN_08814c94(param_1);
  return;
}

