/* Entry 0x0881CDA0 | file offset 0x00019D78 | FUN_0881cda0 | bytes 100 */

void FUN_0881cda0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = FUN_0881cb80(iVar1);
    if (iVar1 == 0) {
      return;
    }
  } while ((*(short **)(iVar1 + 0x48) == (short *)0x0) || (**(short **)(iVar1 + 0x48) != param_1));
  return;
}

