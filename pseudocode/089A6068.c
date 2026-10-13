/* Entry 0x089A6068 | file offset 0x001A3040 | FUN_089a6068 | bytes 592 */

int FUN_089a6068(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = *(int *)(param_1 + 0x200);
  cVar1 = *(char *)(param_1 + 0x21c);
  iVar8 = (uint)*(ushort *)(param_1 + 0x218) << 4;
  if (cVar1 != '\x03') {
    iVar8 = (uint)*(ushort *)(param_1 + 0x218) << 3;
  }
  iVar2 = -0x7f9afdff;
  if (0x261 < *(int *)(param_1 + 0x204) - iVar7) {
    iVar2 = -0x7f9afdfb;
    if ((param_2 & 0xf) == 0) {
      *(undefined1 *)(param_1 + 0x20c) = 0xe0;
      *(undefined4 *)(param_1 + 0x208) = 0;
      iVar10 = 0;
      uVar3 = FUN_089a7104();
      *(undefined4 *)(param_1 + 0x200) = uVar3;
      if (*(short *)(param_1 + 0x216) == 0) {
LAB_089a6260:
        iVar2 = FUN_089a6458(param_1);
        if (-1 < iVar2) {
          puVar4 = *(undefined1 **)(param_1 + 0x200);
          puVar5 = puVar4 + 2;
          *(undefined1 **)(param_1 + 0x200) = puVar5;
          iVar2 = -0x7f9afdff;
          if (puVar5 <= (undefined1 *)(*(int *)(param_1 + 0x204) + 8)) {
            *puVar4 = 0xff;
            *(undefined1 *)(*(int *)(param_1 + 0x200) + -1) = 0xd9;
            *(undefined1 *)(param_1 + 0x21e) = *(undefined1 *)(param_1 + 0x20d);
            iVar2 = *(int *)(param_1 + 0x200) - iVar7;
          }
        }
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x200);
        iVar9 = param_2 + (cVar1 == '\x01');
        while( true ) {
          iVar10 = iVar10 + 1;
          iVar2 = -0x7f9afdff;
          if (*(uint *)(param_1 + 0x204) <= uVar6) break;
          FUN_089a64f8(param_1,iVar9);
          if ((int)(uint)*(ushort *)(param_1 + 0x216) <= iVar10) goto LAB_089a6260;
          uVar6 = *(uint *)(param_1 + 0x200);
          iVar9 = iVar9 + iVar8 * 4;
        }
      }
    }
  }
  return iVar2;
}

