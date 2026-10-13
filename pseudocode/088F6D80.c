/* Entry 0x088F6D80 | file offset 0x000F3D58 | FUN_088f6d80 | bytes 160 */

void FUN_088f6d80(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_089d8140;
  iVar2 = DAT_089d7f38 + param_1 * 0x6a68 + param_2 * 0x1548;
  FUN_088f6a58(param_1,param_2,param_3,param_4,0);
  FUN_08900cbc(iVar1,iVar2 + 0x70c,param_3);
  *(undefined1 *)(iVar2 + 0xe80) = *(undefined1 *)(iVar1 + 0x44 + param_3);
  *(undefined1 *)(iVar2 + 0x1182) = 1;
  return;
}

