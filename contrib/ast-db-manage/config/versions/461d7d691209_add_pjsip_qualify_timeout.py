"""add pjsip qualify_timeout

Revision ID: 461d7d691209
Revises: 31cd4f4891ec
Create Date: 2015-04-15 13:54:08.047851

"""

# revision identifiers, used by Alembic.
revision = '461d7d691209'
down_revision = '31cd4f4891ec'

from alembic import op
import sqlalchemy as sa

def upgrade():
    op.add_column('ps_aors', sa.Column('qualify_timeout', sa.Integer))
    op.add_column('ps_contacts', sa.Column('qualify_timeout', sa.Integer))

def downgrade():
    with op.batch_alter_table('ps_aors') as batch_op:
        batch_op.drop_column('qualify_timeout')
    with op.batch_alter_table('ps_contacts') as batch_op:
        batch_op.drop_column('qualify_timeout')
