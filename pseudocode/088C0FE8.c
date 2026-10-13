/* Entry 0x088C0FE8 | file offset 0x000BDFC0 | FUN_088c0fe8 | bytes 92 */

undefined4 FUN_088c0fe8(int param_1)

{
  undefined4 uVar1;
  undefined2 local_3c [26];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_3c[0] = (undefined2)param_1;
    uVar1 = FUN_088c0cc0(DAT_089d7410,DAT_089d7410 + *(int *)(DAT_089d7408 + 0xc) * 0x34,local_3c,0)
    ;
  }
  return uVar1;
}

