/* Entry 0x088610D4 | file offset 0x0005E0AC | FUN_088610d4 | bytes 116 */

undefined4 FUN_088610d4(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08861050();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    param_2 = param_2 + param_4 * 0x18;
    *(undefined4 *)(param_2 + 0x404) = param_3;
    *(undefined4 *)(param_2 + 0x408) = param_1;
    uVar2 = 0;
  }
  return uVar2;
}

