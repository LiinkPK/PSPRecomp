/* Entry 0x08875364 | file offset 0x0007233C | FUN_08875364 | bytes 352 */

void FUN_08875364(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = false;
  if (5 < DAT_089d6030) goto LAB_08875498;
  if (DAT_089d6030 == 1) {
    DAT_089d6034 = DAT_089d6034 + -1;
LAB_0887543c:
    bVar1 = true;
    if (-1 < DAT_089d6034) goto LAB_08875498;
    DAT_089d603c = 1;
    DAT_089d6030 = DAT_089d6030 + 2;
  }
  else {
    if (DAT_089d6030 != 2) {
      if (DAT_089d6030 == 3) {
        bVar1 = true;
        goto LAB_08875498;
      }
      if (DAT_089d6030 == 4) {
        bVar1 = true;
        DAT_089d6030 = 5;
        goto LAB_08875498;
      }
      if (DAT_089d6030 == 5) {
        DAT_089d6030 = 0;
        goto LAB_08875498;
      }
      if ((DAT_089d6039 != '\0') && (DAT_089d603b != '\0')) {
        DAT_089d603b = '\0';
        if (DAT_089d603a == '\0') {
          FUN_088a24d4(0,0x2713,1,0);
        }
        else {
          DAT_089d6030 = DAT_089d6030 + 1;
        }
      }
      if (DAT_089d6030 == 0) goto LAB_08875498;
      DAT_089d6034 = 1;
      goto LAB_0887543c;
    }
    DAT_089d6030 = 3;
  }
  bVar1 = true;
LAB_08875498:
  if (bVar1) {
    uVar2 = FUN_088ce2a8();
    FUN_088ce080(uVar2);
  }
  return;
}

