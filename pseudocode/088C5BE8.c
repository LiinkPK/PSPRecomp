/* Entry 0x088C5BE8 | file offset 0x000C2BC0 | FUN_088c5be8 | bytes 84 */

undefined4 FUN_088c5be8(int param_1)

{
  undefined4 uVar1;
  undefined2 local_1e [7];
  
  uVar1 = 0;
  if (-1 < param_1) {
    local_1e[0] = (undefined2)param_1;
    uVar1 = FUN_088c5780(DAT_089d7704,DAT_089d7704 + *(short *)(DAT_089d76f8 + 0xc) * 0xc,local_1e,0
                        );
  }
  return uVar1;
}

