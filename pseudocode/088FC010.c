/* Entry 0x088FC010 | file offset 0x000F8FE8 | FUN_088fc010 | bytes 96 */

void FUN_088fc010(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_089d7f6c;
  iVar1 = DAT_089d7f6c;
  while( true ) {
    if (iVar1 == -1) {
      return;
    }
    if (iVar1 == param_2) break;
    piVar2 = piVar2 + 3;
    iVar1 = *piVar2;
  }
  FUN_088f4870(piVar2[1],piVar2[2] & 0xff);
  return;
}

