/* Entry 0x08827704 | file offset 0x000246DC | FUN_08827704 | bytes 56 */

void FUN_08827704(int param_1)

{
  if (*(int *)(param_1 + 0x594) != 0) {
    FUN_08842138();
    *(undefined4 *)(param_1 + 0x594) = 0;
  }
  return;
}

