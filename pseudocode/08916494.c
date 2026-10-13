/* Entry 0x08916494 | file offset 0x0011346C | FUN_08916494 | bytes 144 */

void FUN_08916494(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x7e2) = 1;
  uVar1 = DAT_089d7f90;
  uVar3 = *(undefined4 *)(param_1 + 0x750);
  uVar2 = FUN_08911664(DAT_089d83a8);
  FUN_088fcc70(uVar1,uVar3,0xc8000,uVar2,0);
  FUN_088d7574(param_1 + 0xa0);
  FUN_088cdb04(param_1 + 0x3c0);
  FUN_088ce7f4(param_1 + 0x404);
  return;
}

