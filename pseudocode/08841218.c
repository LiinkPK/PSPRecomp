/* Entry 0x08841218 | file offset 0x0003E1F0 | FUN_08841218 | bytes 152 */

void FUN_08841218(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_09afee54 != 0) {
    FUN_08876330();
    iVar1 = DAT_089d4958;
    iVar2 = 0;
    while( true ) {
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar1 + 0x3c);
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x4a4);
      }
      if (iVar2 == 0) break;
      (**(code **)(*(int *)(iVar2 + 0x544) + 0x4c))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x544) + 0x48));
    }
    FUN_08876370();
  }
  return;
}

