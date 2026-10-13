/* Entry 0x089099D8 | file offset 0x001069B0 | FUN_089099d8 | bytes 228 */

undefined4 FUN_089099d8(int param_1,int param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_1 + 0xc + param_2 * 0x10 != 0) {
    uVar1 = param_3[1];
    *(undefined2 *)(param_1 + 0x13d8) = *param_3;
    *(undefined2 *)(param_1 + 0x13da) = uVar1;
    iVar2 = FUN_08903cac(param_1 + 4,param_2,param_1 + 0x198,0x1258);
    if (iVar2 == 1) {
      iVar2 = 0;
      iVar6 = 0x24c;
      do {
        puVar3 = (undefined4 *)(param_1 + param_2 * 0x1260 + 0x13f0 + iVar2);
        uVar4 = puVar3[1];
        puVar5 = (undefined4 *)(param_1 + 0x139f8 + iVar2);
        *puVar5 = *puVar3;
        puVar5[1] = uVar4;
        iVar6 = iVar6 + -1;
        iVar2 = iVar2 + 8;
      } while (iVar6 != 0);
      *(undefined1 *)(param_1 + 0x14c58) = 1;
      *(undefined4 *)(param_1 + 400) = 4;
      return 1;
    }
  }
  return 0;
}

