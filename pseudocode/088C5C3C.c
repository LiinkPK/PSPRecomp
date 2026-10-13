/* Entry 0x088C5C3C | file offset 0x000C2C14 | FUN_088c5c3c | bytes 88 */

undefined4 FUN_088c5c3c(int param_1)

{
  undefined4 uVar1;
  undefined2 local_18e [195];
  
  uVar1 = 0;
  if (-1 < param_1) {
    local_18e[0] = (undefined2)param_1;
    uVar1 = FUN_088c582c(DAT_089d7708,DAT_089d7708 + *(short *)(DAT_089d76f8 + 0xe) * 0x184,
                         local_18e,0);
  }
  return uVar1;
}

