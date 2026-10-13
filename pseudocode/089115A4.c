/* Entry 0x089115A4 | file offset 0x0010E57C | FUN_089115a4 | bytes 136 */

void FUN_089115a4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0887b5a8(8);
  iVar2 = 0;
  if (iVar1 != 0) {
    FUN_0887b1e4(iVar1);
    iVar2 = iVar1;
  }
  *(int *)(param_1 + 0x15c) = iVar2;
  FUN_0887b120();
  FUN_0887b260(*(undefined4 *)(param_1 + 0x15c),"text/JP/mess_pk_worldmap_0.bin",param_2,0);
  FUN_0887b130();
  return;
}

