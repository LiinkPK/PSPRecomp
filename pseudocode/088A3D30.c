/* Entry 0x088A3D30 | file offset 0x000A0D08 | FUN_088a3d30 | bytes 216 */

undefined4 FUN_088a3d30(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0xc) != '\x01') {
    uVar3 = 0;
    puVar2 = &DAT_09b4d2b0;
    do {
      if (puVar2[3] == param_2) {
        FUN_0889f6a0(param_1 + 1,*param_1,puVar2[1],puVar2[2]);
        uVar1 = FUN_0889f750(0x3f800000,param_1 + 1,2,FUN_088a40c4,param_1);
        *(undefined1 *)(param_1 + 0xc) = uVar1;
        param_1[10] = param_3;
        param_1[0xb] = param_4;
        return 1;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar3 < 0x10);
  }
  return 0;
}

