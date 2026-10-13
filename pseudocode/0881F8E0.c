/* Entry 0x0881F8E0 | file offset 0x0001C8B8 | FUN_0881f8e0 | bytes 136 */

undefined4 FUN_0881f8e0(short *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    puVar2 = (undefined4 *)0x0;
    while( true ) {
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      else {
        puVar2 = (undefined4 *)*puVar2;
      }
      if (puVar2 == (undefined4 *)0x0) break;
      FUN_0881fc30(puVar2,param_2 + 0x30);
    }
    uVar1 = 0;
  }
  return uVar1;
}

