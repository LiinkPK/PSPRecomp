/* Entry 0x088F414C | file offset 0x000F1124 | FUN_088f414c | bytes 220 */

undefined4 FUN_088f414c(undefined4 param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_640 [1508];
  undefined1 auStack_5c [12];
  int local_50;
  int local_38;
  undefined *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  
  uVar2 = 0;
  uVar1 = FUN_088cb164(DAT_089d712c + 0xf58);
  FUN_088bf108(auStack_640);
  FUN_088c5e44(auStack_5c);
  local_2c = &DAT_089ccc88;
  local_28 = uVar1;
  local_24 = auStack_640;
  FUN_088bf238(auStack_640,uVar1,0);
  FUN_088c5e4c(auStack_5c,&local_2c,0,0);
  FUN_088bf41c(auStack_640);
  if (local_38 != local_50) {
    if (param_3 != '\0') {
      FUN_088cbcb4(uVar1);
    }
    uVar2 = 1;
  }
  FUN_088bf17c(auStack_640,2);
  return uVar2;
}

