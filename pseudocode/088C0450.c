/* Entry 0x088C0450 | file offset 0x000BD428 | FUN_088c0450 | bytes 72 */

void FUN_088c0450(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_088c0228(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x57c;
  } while (iVar1 < 0x1f);
  return;
}

