/* Entry 0x0890C930 | file offset 0x00109908 | FUN_0890c930 | bytes 536 */

void FUN_0890c930(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined1 *puVar10;
  int iVar11;
  int local_200;
  undefined1 local_1fc [436];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_38;
  undefined4 local_34;
  
  piVar8 = &local_200;
  piVar9 = &local_200;
  local_38 = '\x01';
  iVar11 = 0;
  local_40 = param_6;
  local_3c = param_1;
  local_34 = param_2;
  cVar2 = local_38;
  if (0 < param_6) {
    local_48 = param_4 * 2;
    puVar10 = local_1fc;
    local_44 = param_4;
    do {
      iVar1 = FUN_0890d638(param_5,param_3);
      if (iVar1 < 0) {
        cVar2 = '\0';
        break;
      }
      FUN_08935828(piVar9 + 1,0,200);
      *piVar9 = 0;
      piVar9[0x33] = 0;
      piVar9[0x34] = 0;
      piVar9[0x35] = 0;
      *(undefined1 *)(piVar9 + 0x36) = 0;
      *(undefined1 *)((int)piVar9 + 0xd9) = 0;
      FUN_08935524(puVar10,param_5 + iVar1 * 2,local_48);
      iVar1 = local_44;
      piVar8[0x33] = param_3;
      *(char *)(piVar8 + 0x36) = (char)iVar1;
      puVar3 = piVar9 + 1;
      iVar6 = 0;
      iVar1 = 0;
      iVar5 = *(int *)(local_3c + 0x3c);
      puVar4 = puVar3;
      do {
        iVar1 = iVar1 + 2;
        iVar6 = iVar6 + CONCAT22(*(undefined2 *)((int)puVar4 + 2),*(undefined2 *)puVar3);
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar1 < 100);
      *piVar8 = iVar6 + piVar9[0x33] + (int)*(char *)(piVar9 + 0x36);
      piVar7 = (int *)0x0;
      if (iVar5 != 0) {
        piVar7 = (int *)(param_1 + iVar5 * 8 + 0x14);
      }
      if (piVar7 == (int *)0x0) {
        piVar8[0x35] = -1;
        piVar8[0x34] = 0;
      }
      else {
        piVar8[0x35] = *piVar7;
        piVar8[0x34] = piVar7[1];
      }
      iVar11 = iVar11 + 1;
      param_5 = param_5 + 0xf4;
      piVar9 = piVar9 + 0x37;
      piVar8 = piVar8 + 0x37;
      puVar10 = puVar10 + 0xdc;
      cVar2 = local_38;
    } while (iVar11 < local_40);
  }
  if (cVar2 == '\x01') {
    FUN_0890569c(local_3c,local_34,&local_200,local_40 * 0xdc);
  }
  return;
}

